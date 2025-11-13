// 函数: sub_140d18ba0
// 地址: 0x140d18ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
arg1[2] = arg3
int32_t rax
rax.b = arg3 s<= 0
*arg1 = rax - 1

if (arg2 s<= 0)
    sub_140af98a0("Unknown", 0x67, 
        Max UObject count is invalid. It must be a number that is greater than 0.", arg4)
    sub_140afbb40()

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
arg1[0xa] = ((zx.d(temp0) + temp1) s>> 0x10) + 1
arg1[8] = (((zx.d(temp0) + temp1) s>> 0x10) + 1) << 0x10
int64_t rcx_4 = sx.q(((zx.d(temp0) + temp1) s>> 0x10) + 1)
int64_t rax_6 = 8 * rcx_4

if (mulu.dp.q(8, rcx_4) u>> 0x40 != zx.o(0))
    rax_6 = -1

int64_t rax_7 = j_sub_140a82f30(rax_6)
int64_t count = sx.q(arg1[0xa]) << 3
*(arg1 + 0x10) = rax_7
int32_t result = memset(rax_7, 0, count)

if (arg4.b != 0)
    int64_t i_1 = sx.q(arg1[8])
    int64_t rax_8 = 0x18 * i_1
    
    if (mulu.dp.q(0x18, i_1) u>> 0x40 != zx.o(0))
        rax_8 = -1
    
    int64_t rax_9 = rax_8 + 8
    
    if (rax_8 u>= -8)
        rax_9 = -1
    
    int64_t* rax_10 = j_sub_140a82f30(rax_9)
    void* rcx_8
    
    if (rax_10 == 0)
        rcx_8 = nullptr
    else
        *rax_10 = i_1
        rcx_8 = &rax_10[1]
        void* rax_11 = rcx_8
        
        if (i_1 != 0)
            int64_t i
            
            do
                __builtin_memset(rax_11, 0, 0x14)
                rax_11 += 0x18
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    result = arg1[0xa]
    *(arg1 + 0x18) = rcx_8
    
    if (result s> 0)
        int64_t r8_1 = 0
        int32_t r9 = 0
        
        do
            int64_t rax_12 = sx.q(r9)
            r8_1 += 8
            rbx += 1
            r9 += 0x10000
            *(r8_1 + *(arg1 + 0x10) - 8) = *(arg1 + 0x18) + rax_12 * 0x18
            result = arg1[0xa]
        while (rbx s< result)
    
    arg1[0xb] = result

int32_t rdx_2 = arg1[2]

if (rdx_2 s<= 0)
    return result

return sub_140d18080(&arg1[4], rdx_2)
