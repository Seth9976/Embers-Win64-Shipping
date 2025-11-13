// 函数: sub_140780800
// 地址: 0x140780800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1[1]

if (lpCriticalSection != 0)
    int64_t rbp_1 = *arg1
    uint32_t rbx_2 = (rbp_1 u>> 0x20).d
    EnterCriticalSection(lpCriticalSection)
    
    if ((rbx_2.b & 1) != 0 || (rbx_2.b & 2) != 0)
        lpCriticalSection->__offset(0x38).d -= 1
    
    int32_t* rcx_2 = sx.q(rbp_1.d) * 0x38 + lpCriticalSection->__offset(0x80).q
    
    if (((rbx_2 u>> 1).b & 1) != 0)
        *rcx_2 -= 1
    
    LeaveCriticalSection(lpCriticalSection)

int64_t* rbx_4 = arg1[2]

if (rbx_4 == 0)
    return 

rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return 

(**rbx_4)(rbx_4)
int32_t temp1_1 = *(rbx_4 + 0xc)
*(rbx_4 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_4 + 8))
