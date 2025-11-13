// 函数: sub_1409aa070
// 地址: 0x1409aa070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143e1d990
arg1[2] = 0
int32_t r9 = -1
int64_t rdi = arg2
arg1[1].d = 0xffffffff
int32_t** result = arg1

if (arg3.b != 0)
    int32_t rax_1 = data_143e1d994
    r9 = rax_1
    arg1[1].d = rax_1

int32_t i = r9 + 1
arg1[1].d = i

while (i s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_1
    arg2 = sx.q(rax_4 s>> 0x10)
    arg3 = *(data_143e1d9a0 + (arg2 << 3))
    arg1 = sx.q(zx.d(rax_4.w) - rdx_1) * 3
    
    if (*(arg3 + (arg1 << 3)) != 0)
        result[2] = arg3 + (arg1 << 3)
        break
    
    i += 1
    result[1].d = i

result[3] = rdi
result[4].d = arg4
*(result + 0x24) = arg5 | 0x10000000

if (data_14399ea98(arg1, arg2, arg3) == 0)
    *(result + 0x24) |= 0x8000000

while (true)
    int64_t* rdi_1 = result[2]
    void* const rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = *rdi_1
    
    if ((result[4].d & *(rdi_2 + 8)) == 0)
        int32_t rax_11 = *(rdi_2 + 0xc)
        void* const rax_17
        
        if (rax_11 s>= data_143e1d9b4)
            rax_17 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_11)
            uint32_t rdx_3 = zx.d(temp2_1)
            int32_t rax_13 = temp3_1 + rdx_3
            rax_17 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                + sx.q(zx.d(rax_13.w) - rdx_3) * 0x18
        
        if ((*(result + 0x24) & *(rax_17 + 8)) == 0)
            int64_t rax_19 = sub_140d41340()
            void* rcx_7 = result[3]
            
            if (rcx_7 == rax_19)
                return result
            
            void* rax_20 = *(rdi_2 + 0x10)
            int64_t rcx_8 = sx.q(*(rcx_7 + 0x38))
            
            if (rcx_8.d s<= *(rax_20 + 0x38) && *(*(rax_20 + 0x30) + (rcx_8 << 3)) == rcx_7 + 0x30)
                return result
    
    int32_t* r10_2 = *result
    int32_t rax_23 = result[1].d + 1
    result[1].d = rax_23
    result[2] = 0
    
    if (rax_23 s>= r10_2[9])
        return result
    
    int64_t rcx_12
    int64_t rdx_7
    
    while (true)
        uint32_t rdx_6 = zx.d(rax_23.w)
        int32_t rcx_9 = rax_23
        
        if (rax_23 s< 0)
            rcx_9 = rax_23 + 0xffff
            rdx_6 -= 0x10000
        
        rdx_7 = sx.q(rdx_6) * 3
        rcx_12 = *(*(r10_2 + 0x10) + (sx.q(rcx_9 s>> 0x10) << 3))
        
        if (*(rcx_12 + (rdx_7 << 3)) != 0)
            break
        
        rax_23 += 1
        result[1].d = rax_23
        
        if (rax_23 s>= r10_2[9])
            return result
    
    result[2] = rcx_12 + (rdx_7 << 3)
