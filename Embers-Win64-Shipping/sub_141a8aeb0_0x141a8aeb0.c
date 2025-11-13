// 函数: sub_141a8aeb0
// 地址: 0x141a8aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cecb88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecb88)
    
    if (data_143cecb88 == 0xffffffff)
        sub_14090c820(&data_143cecb70)
        _Init_thread_footer(&data_143cecb88)

int64_t r15 = data_143cecb70
int64_t r12 = data_143cecb78
int64_t rbp = data_143cecb80
uint64_t result

if (arg4 s<= 1)
    uint64_t result_5 = *arg2
    uint64_t result_2 = *arg3
    uint64_t result_1 = *arg1
    result = result_2
    
    if (result_5 s>= result_2)
        result = result_5
    
    if (result_1 s>= result)
        result = result_1
    
    if (result s>= 0x30)
        uint64_t result_9 = result_1
        uint64_t result_10 = ((r15 - 0x80) s/ 0xc0) & 0xfffffffffffffff8
        
        if (result_10 s< 1)
            result_10 = 1
        
        if (result_1 s> result_10)
            result_9 = result_10
            int64_t temp1_3 = mods.dp.q(sx.o(result_1), result_10)
            
            if (temp1_3 != 0)
                result_9 -= divs.dp.q(sx.o(result_10 - temp1_3 - 1), 
                    (divs.dp.q(sx.o(result_1), result_10) << 3) + 8) << 3
            
            *arg1 = result_9
            result_5 = *arg2
            result_2 = *arg3
        
        void* r14_2 = r15 - (((result_5 * result_9) << 2) + 0x80)
        uint64_t result_7
        
        if (r14_2 s< result_9 << 4)
            result_7 = divu.dp.q(0x480000, result_10 << 4)
        else
            result_7 = divu.dp.q(0:r14_2, result_9 << 2)
        
        int64_t r14_3 = 0x180000
        result = divu.dp.q(0x180000, result_9 << 3)
        uint64_t result_6 = result
        
        if (result_7 s< result)
            result_6 = result_7
        
        int64_t r10_6 = result_6 & 0xfffffffffffffffc
        
        if (result_2 s> r10_6)
            int64_t rax_60
            int64_t rdx_27
            rdx_27:rax_60 = sx.o(result_2)
            int64_t temp1_8 = mods.dp.q(rdx_27:rax_60, r10_6)
            result = divs.dp.q(rdx_27:rax_60, r10_6)
            
            if (temp1_8 != 0)
                result =
                    divs.dp.q(sx.o(r10_6 - temp1_8), (divs.dp.q(sx.o(result_2), r10_6) << 2) + 4)
                    << 2
                r10_6 -= result
            
            *arg3 = r10_6
        else if (result_1 == result_9)
            uint64_t result_8 = result_5
            int64_t r8_9 = (result_2 * result_9) << 2
            
            if (r8_9 s<= 0x400)
                r14_3 = r15
            else if (rbp != 0 && r8_9 s<= 0x8000)
                result_8 = 0x240
                r14_3 = r12
                
                if (result_5 s< 0x240)
                    result_8 = result_5
            
            result = divu.dp.q(0:r14_3, result_9 * 0xc)
            uint64_t result_3 = result
            
            if (result_8 s< result)
                result_3 = result_8
            
            if (result_3 s> 8)
                int32_t rax_70
                int32_t rdx_34
                rdx_34:rax_70 = sx.o(result_3)
                uint64_t rdx_35 = zx.q(rdx_34) & 7
                result_3 -= (zx.q(rax_70 + rdx_35.d) & 7) - rdx_35
            label_141a8b21b:
                int64_t rax_75
                int64_t rdx_36
                rdx_36:rax_75 = sx.o(result_5)
                int64_t temp1_11 = mods.dp.q(rdx_36:rax_75, result_3)
                result = divs.dp.q(rdx_36:rax_75, result_3)
                
                if (temp1_11 != 0)
                    result = divs.dp.q(sx.o(result_3 - temp1_11), 
                        (divs.dp.q(sx.o(result_5), result_3) << 3) + 8) << 3
                    result_3 -= result
                
                *arg2 = result_3
            else if (result_3 != 0)
                goto label_141a8b21b
else
    int64_t r8 = *arg1
    int64_t rcx_3 = (r15 - 0x80) s/ 0xc0
    
    if (rcx_3 s> 0x140)
        rcx_3 = 0x140
    
    if (rcx_3 s< r8)
        int32_t rax_6
        int32_t rdx_1
        rdx_1:rax_6 = sx.o(rcx_3)
        uint64_t rdx_2 = zx.q(rdx_1) & 7
        r8 = rcx_3 - ((zx.q(rax_6 + rdx_2.d) & 7) - rdx_2)
        *arg1 = r8
    
    uint64_t r9 = *arg3
    uint64_t temp0_1 = divu.dp.q(0:(r12 - r15), r8 << 4)
    int64_t temp0_2 = divs.dp.q(sx.o(arg4 - 1 + r9), arg4)
    uint64_t rcx_5
    
    if (temp0_1 s> temp0_2)
        int32_t rax_22
        int32_t rdx_8
        rdx_8:rax_22 = sx.o(temp0_2 + 3)
        uint64_t rdx_9 = zx.q(rdx_8) & 3
        result = (zx.q(rax_22 + rdx_9.d) & 3) - rdx_9
        rcx_5 = temp0_2 - result + 3
        
        if (rcx_5 s>= r9)
            rcx_5 = r9
    else
        int32_t rax_18
        int32_t rdx_6
        rdx_6:rax_18 = sx.o(temp0_1)
        uint64_t rdx_7 = zx.q(rdx_6) & 3
        result = (zx.q(rax_18 + rdx_7.d) & 3) - rdx_7
        rcx_5 = temp0_1 - result
    
    *arg3 = rcx_5
    
    if (rbp s> r12)
        uint64_t result_4 = *arg2
        uint64_t temp0_3 = divu.dp.q(0:(rbp - r12), (*arg1 * arg4) << 2)
        int64_t temp0_4 = divs.dp.q(sx.o(arg4 - 1 + result_4), arg4)
        
        if (temp0_3 s>= temp0_4 || temp0_3 s< 8)
            int32_t rax_36
            int32_t rdx_15
            rdx_15:rax_36 = sx.o(temp0_4 + 7)
            uint64_t rdx_16 = zx.q(rdx_15) & 7
            result = temp0_4 - ((zx.q(rax_36 + rdx_16.d) & 7) - rdx_16) + 7
            
            if (result s>= result_4)
                result = result_4
            
            *arg2 = result
        else
            int32_t rax_32
            int32_t rdx_13
            rdx_13:rax_32 = sx.o(temp0_3)
            uint64_t rdx_14 = zx.q(rdx_13) & 7
            result = (zx.q(rax_32 + rdx_14.d) & 7) - rdx_14
            *arg2 = temp0_3 - result

return result
