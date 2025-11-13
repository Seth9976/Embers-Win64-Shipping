// 函数: sub_140a4bff0
// 地址: 0x140a4bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_7 = arg3

if ((arg1.b & 1) != 0)
    char r9_1 = *arg1
    *arg1 = *arg2
    arg1 = &arg1[1]
    *arg2 = r9_1
    arg2 = &arg2[1]
    i_7 -= 1

if ((arg1.b & 2) != 0)
    int16_t r8 = *arg1
    *arg1 = *arg2
    arg1 = &arg1[2]
    *arg2 = r8
    arg2 = &arg2[2]
    i_7 -= 2

if ((arg1.b & 4) != 0)
    int32_t r8_1 = *arg1
    *arg1 = *arg2
    arg1 = &arg1[4]
    *arg2 = r8_1
    arg2 = &arg2[4]
    i_7 -= 4

int32_t rax_4 = arg1.d
int32_t result_1 = 0x20

if (rax_4 != arg2.d)
    uint64_t rflags_1
    int32_t result_2
    result_2, rflags_1 = _bit_scan_forward(rax_4 - arg2.d)
    result_1 = result_2

uint64_t result = 3

if (result_1 u<= 3)
    result = zx.q(result_1)

if (result.d != 0)
    int32_t temp1_1 = result.d
    result = zx.q(result.d - 1)
    
    if (temp1_1 != 1)
        if (result.d != 1 && i_7 u>= 8)
            uint64_t i_4 = i_7 u>> 3
            i_7 -= i_4 * 8
            uint64_t i
            
            do
                int64_t r8_2 = *arg1
                result = *arg2
                *arg1 = result
                arg1 = &arg1[8]
                *arg2 = r8_2
                arg2 = &arg2[8]
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        if (i_7 u>= 4)
            uint64_t i_5 = i_7 u>> 2
            i_7 -= i_5 * 4
            uint64_t i_1
            
            do
                int32_t r8_3 = *arg1
                result = zx.q(*arg2)
                *arg1 = result.d
                arg1 = &arg1[4]
                *arg2 = r8_3
                arg2 = &arg2[4]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    
    if (i_7 u>= 2)
        uint64_t i_6 = i_7 u>> 1
        i_7 -= i_6 * 2
        uint64_t i_2
        
        do
            int16_t r8_4 = *arg1
            result = zx.q(*arg2)
            *arg1 = result.w
            arg1 = &arg1[2]
            *arg2 = r8_4
            arg2 = &arg2[2]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)

if (i_7 u>= 1)
    char* rdx = arg2 - arg1
    int64_t i_3
    
    do
        char r8_5 = *arg1
        result = zx.q(*(rdx + arg1))
        *arg1 = result.b
        *(rdx + arg1) = r8_5
        arg1 = &arg1[1]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

return result
