// 函数: sub_142b80be0
// 地址: 0x142b80be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg2
int64_t r14 = sx.q(arg3)
int32_t r9 = (r14 << 3).d
int32_t* r12_1 = arg1 + 0x18 + (r14 << 2)
int32_t i = arg4 + zx.d((r15 u>> (0x20 - r9.b)).b)

if (i u> *r12_1)
    void* rsi_2 = arg1 + 4 + (r14 << 2)
    
    do
        int32_t r10_2 = *rsi_2
        uint32_t r8
        
        if (r9 s>= 0x20)
            r8 = 0
        else
            r8 = 0xffffffff u>> r9.b
        
        char rcx_2 = 0x20 - r9.b
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i - r10_2)
        r14 = zx.q(r14.d - 1)
        rsi_2 -= 4
        int32_t r9_3 = *r12_1 - r10_2 + 1
        r12_1 = rsi_2 + 0x14
        r9 = (r14 << 3).d
        r15 =
            (r15 & (0xffffff00 << rcx_2 | r8)) | (r10_2 + mods.dp.d(temp2_1:temp3_1, r9_3)) << rcx_2
        i = divs.dp.d(temp2_1:temp3_1, r9_3) + zx.d((r15 u>> (0x20 - r9.b)).b)
    while (i u> *r12_1)

int32_t rcx_4 = (r14 << 3).d
uint32_t rdi

if (rcx_4 s>= 0x20)
    rdi = 0
else
    rdi = 0xffffffff u>> rcx_4.b

return ((zx.q(0xffffff00 << (0x20 - rcx_4.b)) | zx.q(rdi)) & zx.q(r15))
    | zx.q(i << (0x20 - rcx_4.b))
