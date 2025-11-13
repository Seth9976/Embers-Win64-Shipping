// 函数: sub_141002ba0
// 地址: 0x141002ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r15 = zx.d(*arg4)
int32_t i = 0
void* r14 = *(arg1 + 0x18)
int32_t r12 = 0
uint32_t r13 = zx.d(*(arg2 + 0x26))
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(r15)
int64_t __saved_r15

if (&__saved_r15 != 0x20)
    r12 = temp0

if (r12 == 0xffffffff)
    return 

int32_t rbx_1 = 1
int64_t* rsi_1 = arg3 + 0x590

do
    if ((rbx_1 & r15) != 0)
        int64_t* rcx_1 = *(*(r14 + 0x1c8) + 0x30)
        (*(*rcx_1 + 0x128))(rcx_1, zx.q(i + r13), rsi_1[-0x60])
        void* rdx_1 = *rsi_1
        
        if (data_1439b4ad4 != 0 && rdx_1 != 0 && *(rdx_1 + 8) != 0)
            sub_141026da0(*(*(r14 + 0x1c8) + 0x118), rdx_1)
        
        *(arg3 + 0xa) &= (not.d(1 << (i u% 0x20))).w
    
    i += 1
    rbx_1 = rol.d(rbx_1, 1)
    rsi_1 = &rsi_1[1]
while (i u< r12 + 1)
