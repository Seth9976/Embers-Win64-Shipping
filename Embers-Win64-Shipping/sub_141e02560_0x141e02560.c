// 函数: sub_141e02560
// 地址: 0x141e02560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[4]
int512_t result

if (rbx != 0)
    void* rax_1
    rax_1, result = sub_142591550()
    void* rdx = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            sub_141f3e990(arg1[4], 1, 1)

void* rbx_1 = arg1[0x48]

if (rbx_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rbx_1 = rax_6

int64_t* rcx_3 = *(rbx_1 + 0xa8)

if (rcx_3 == 0)
labelid_1:
    result.o = zx.o(0)
else
    int64_t* rax_8 = (*(*rcx_3 + 0x20))(rcx_3)
    
    if (arg2 s< 0)
    labelid_1:
        result.o = zx.o(0)
    else
        int32_t rcx_4 = rax_8[1].d
        
        if (arg2 s>= rcx_4)
        labelid_1:
            result.o = zx.o(0)
        else
            int64_t rax_10 = sx.q(*(*(*rax_8 + (sx.q(rcx_4 - arg2) << 3) - 8) + 0x4c))
            
            if (rax_10 == neg.q(*(rbx_1 + 0xa0)))
            labelid_1:
                result.o = zx.o(0)
            else
                int64_t r9_2 = sx.q(*(rax_10 + *(rbx_1 + 0xa0) + 0x10))
                
                if (*(rbx_1 + 0x1c0) == *(rbx_1 + 0x1ec))
                labelid_1:
                    result.o = zx.o(0)
                else
                    void* r8_1 = rbx_1 + 0x1f0
                    void* rcx_8 = *(r8_1 + 8)
                    
                    if (rcx_8 != 0)
                        r8_1 = rcx_8
                    
                    int32_t rax_13 = *(r8_1 + (((sx.q(*(rbx_1 + 0x200)) - 1) & r9_2) << 2))
                    
                    if (rax_13 == 0xffffffff)
                    label_141e02699:
                        result.o = zx.o(0)
                    else
                        int64_t r8_2 = *(rbx_1 + 0x1b8)
                        int64_t rdx_4
                        
                        while (true)
                            rdx_4 = sx.q(rax_13)
                            int64_t rcx_10 = rdx_4 * 2
                            
                            if (*(r8_2 + (rcx_10 << 3)) == r9_2.d)
                                break
                            
                            rax_13 = *(r8_2 + (rcx_10 << 3) + 8)
                            
                            if (rax_13 == 0xffffffff)
                                goto label_141e02699_2
                        
                        if (rax_13 == 0xffffffff)
                        label_141e02699_1:
                            result.o = zx.o(0)
                        else
                            int64_t rdx_5 = rdx_4 << 4
                            
                            if (rdx_5 == neg.q(r8_2) || rdx_5 + r8_2 == -4)
                            label_141e02699_2:
                                result.o = zx.o(0)
                            else
                                result.o = *(*(rbx_1 + sx.q(1 - *(rbx_1 + 0x208)) * 0x10 + 0x198)
                                    + (sx.q(*(rdx_5 + r8_2 + 4) + arg3) << 2))

return result
