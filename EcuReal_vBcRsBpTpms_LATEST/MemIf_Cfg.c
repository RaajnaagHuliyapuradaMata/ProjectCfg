#include "Std_Types.hpp"
#include "MemIf.hpp"

#include "Fee_30_SmallSector.hpp"

#define MEMIF_LOCAL static
#define MEMIF_LOCAL_INLINE LOCAL_INLINE

#define MEMIF_START_SEC_CONST_8BIT
#include "MemMap.hpp"
CONST(uint8, MEMIF_CONST) MemIf_NumberOfDevices = MEMIF_NUMBER_OF_DEVICES;
#define MEMIF_STOP_SEC_CONST_8BIT
#include "MemMap.hpp"

#define MEMIF_START_SEC_CODE
#include "MemMap.hpp"
MEMIF_LOCAL_INLINE FUNC (Std_ReturnType, MEMIF_PRIVATE_CODE) MemIf_EcuabFee_WriteWrapper(uint16 BlockNumber, MemIf_DataPtr_pu8 DataBufferPtr);

MEMIF_LOCAL_INLINE FUNC (Std_ReturnType, MEMIF_PRIVATE_CODE) MemIf_EcuabFee_WriteWrapper(uint16 BlockNumber, MemIf_DataPtr_pu8 DataBufferPtr)
{
    return EcuabFee_Write(BlockNumber, DataBufferPtr);
}
#define MEMIF_STOP_SEC_CODE
#include "MemMap.hpp"

#define MEMIF_START_SEC_CONST_32BIT
#include "MemMap.hpp"
CONST(MemIf_MemHwAApi_Type, MEMIF_CONST) MemIf_MemHwaApis[MEMIF_NUMBER_OF_DEVICES] =
{
   {
    EcuabFee_Read
   ,   MemIf_EcuabFee_WriteWrapper
   ,   EcuabFee_EraseImmediateBlock
   ,   EcuabFee_InvalidateBlock
   ,   EcuabFee_Cancel
   ,   EcuabFee_GetStatus
   ,   EcuabFee_GetJobResult
   ,   EcuabFee_SetMode
  }
};
#define MEMIF_STOP_SEC_CONST_32BIT
#include "MemMap.hpp"
