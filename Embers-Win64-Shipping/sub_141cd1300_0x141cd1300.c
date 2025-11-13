// 函数: sub_141cd1300
// 地址: 0x141cd1300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2) * 5
int64_t rax_1 = arg1[0x1c]
int64_t rbx = sx.q(*(rax_1 + (rdx << 3) + 8))
uint64_t result = zx.q(arg3[0x12])

if (rbx.d s> result.d)
    arg3[0x12] = rbx.d
    
    if (rbx.d s> arg3[0x13])
        result = sub_1408090b0(arg3, result.d)
else if (rbx.d s< result.d && rbx.d != result.d)
    arg3[0x12] = rbx.d
    result = sub_141a640c0(arg3)

int32_t rsi = 0

if (rbx.d s> 0)
    int32_t rcx_2 = (rbx - 1).d
    int32_t arg_10 = rcx_2
    int64_t r10_1 = 0
    int64_t r15_1
    
    do
        int64_t rdx_2 = *(rax_1 + (rdx << 3))
        r15_1 = r10_1 + 1
        int64_t r9_1 = arg1[7]
        int64_t rax_2 = 0
        
        if (rsi != rcx_2)
            rax_2 = r15_1
        
        int32_t r8 = *(r9_1 + sx.q(*(rdx_2 + (rax_2 << 2))) * 0x18)
        int64_t rax_5 = *arg1
        int64_t r9_2 = sx.q(*(r9_1 + sx.q(*((r10_1 << 2) + rdx_2)) * 0x18))
        int64_t rcx_6 = r9_2 << 5
        int32_t* r10_2 = *(rcx_6 + rax_5 + 0x10)
        void* r11_1 = &r10_2[sx.q(*(rcx_6 + rax_5 + 0x18))]
        int64_t rdx_3
        
        if (r10_2 == r11_1)
        label_141cd140e:
            rdx_3 = zx.q(data_143a1c6bc)
        else
            int64_t rbx_1 = arg1[0xe]
            
            while (true)
                rdx_3 = sx.q(*r10_2)
                int64_t rcx_7 = rdx_3 * 3
                int32_t rcx_8 = *(rbx_1 + (rcx_7 << 3))
                int32_t rax_8 = *(rbx_1 + (rcx_7 << 3) + 4)
                
                if (rcx_8 == r9_2.d && rax_8 == r8)
                    break
                
                if (rcx_8 == r8 && rax_8 == r9_2.d)
                    break
                
                r10_2 = &r10_2[1]
                
                if (r10_2 == r11_1)
                    goto label_141cd140e
        
        result = *(arg3 + 0x40)
        int32_t* result_1 = arg3
        r10_1 = r15_1
        
        if (result != 0)
            result_1 = result
        
        rsi += 1
        result_1[r10_1] = rdx_3.d
        rcx_2 = arg_10
    while (r15_1 s< rbx)

return result
