// 函数: sub_14217e420
// 地址: 0x14217e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xe0].d
void* result = (*(*arg1 + 0x368))()

if (result.b == 0)
    int64_t* rcx_1 = arg1[0x11]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x348))(rcx_1)
        result = arg1[0x11]
        int32_t r13_2
        r13_2.b = arg1[0x43] f- *(result + 0x1d0) f> fconvert.d(arg2 * 0.75f)
        arg1[0xe0].d = r13_2
else
    int32_t r13_1 = 0
    int64_t rbp_1 = 0
    int64_t* rsi_1 = arg1[0x12]
    int32_t r14_1 = 0
    int32_t r15_1 = 0
    result = &rsi_1[arg1[0x13]]
    uint64_t r12_2 = sx.q(arg1[0x13].d) << 3 u>> 3
    
    if (rsi_1 u> result)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int64_t* rdi_1 = *rsi_1
            
            if (rdi_1 != 0)
                r15_1 += 1
                result = (*(*rdi_1 + 0x348))(rdi_1)
                arg2 = arg2 * 0.75f
                
                if (not(arg1[0x43] f- rdi_1[0x3a] f<= fconvert.d(arg2)))
                    r14_1 += 1
            
            rsi_1 = &rsi_1[1]
            rbp_1 += 1
        while (rbp_1 != r12_2)
        
        if (r15_1 s>= 2 && r15_1 == r14_1)
            r13_1 = 1
    
    arg1[0xe0].d = r13_1

int32_t r9 = arg1[0xe0].d

if (rax == r9)
    return result

return sub_142161350(data_143f5b298, arg1[0x28], arg1, r9) __tailcall
