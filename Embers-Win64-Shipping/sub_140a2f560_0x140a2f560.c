// 函数: sub_140a2f560
// 地址: 0x140a2f560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = 0xff
uint32_t r10 = zx.d(arg3.b)
uint32_t rax = 0xff
int32_t rbp = arg3

if (r10 != 0xff)
    rax = r10

if (rax == 0xff)
    char rax_1
    int32_t r9
    rax_1, r9 = sub_140a54810()
    
    if (rax_1 != 0)
        int32_t rbx_1 = *(arg2 + 8)
        int32_t r8_2 = rbx_1 s>> 9 & 1
        int32_t rbx_3 = rbx_1 s>> 0xa & 3
        
        if (rbx_3 != 2)
            if (rbx_3 == 1 && (*(arg1 + 0x7c8) == 0 || data_14399e5cc == 0))
                rbx_3 = 0
                r8_2 = 1
        else if (*(arg1 + 0x7c9) == 0 || data_14399e5c8 == 0)
            r8_2 = 0
            rbx_3 = 0
        
        int32_t result = sub_140a2f3b0(zx.q(rbx_3) * 0x1e8 + 0x7e8 + arg1, arg2, r8_2 ^ 1, r9)
        
        if (result s< 0)
            return result
        
        int64_t* rcx_7 =
            *(*(arg1 + sx.q(result + *(arg1 + 0x7c4) * rbx_3 + *(arg1 + 0x7bc)) * 0x18 + 8) + 0x38)
        return (*(*rcx_7 + 0x10))(rcx_7)
    
    rbp = 2

uint32_t rdx_1 = zx.d(arg4)
uint32_t rax_7 = 0xff

if (rdx_1 != 0xff)
    rax_7 = rdx_1

if (rax_7 == 0xff)
    rdx_1 = sub_140a24460(arg1)
else if (rdx_1 == 0xff)
    rdx_1 = 0xff

uint32_t rcx_9 = zx.d(rbp.b)
uint64_t rax_9 = 0xff
int32_t r9_3 = rbp s>> 8 & 1

if (rcx_9 != 0xff)
    rax_9 = zx.q(rcx_9)

int64_t* rcx_10 = *(arg1 + rax_9 * 0x18 + 8)
uint32_t rax_11 = zx.d(rdx_1.b)
uint64_t rdx_2 = zx.q(r9_3)
int64_t r10_1 = *rcx_10

if (rax_11 != 0xff)
    rbx = rax_11

if (rax_9.d != rbx)
    return (*(r10_1 + 0x50))(rcx_10, rdx_2, arg2, r9_3)

return (*(r10_1 + 0x40))(rcx_10, rdx_2, arg2, r9_3)
