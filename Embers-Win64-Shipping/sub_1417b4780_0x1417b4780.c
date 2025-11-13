// 函数: sub_1417b4780
// 地址: 0x1417b4780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg2
int64_t* r14_2 = (sx.q(arg2[1].d) << 4) + result[0xa0]
int64_t* rbx = *r14_2
uint64_t rdi = sx.q(r14_2[1].d)
void* rbp_2 = &rbx[rdi * 2]

if (rbx != rbp_2)
    do
        int64_t* rax = *rbx
        int64_t* rcx = nullptr
        
        if (*(rax + 0xc) u>= 3)
            rcx = rax
        
        int64_t* rdi_3 = (sx.q(rcx[1].d) << 4) + *(*rcx + 0x500)
        int64_t* result_1 = *rdi_3
        uint64_t rdx = sx.q(rdi_3[1].d)
        result = result_1
        void* rcx_3 = &result_1[rdx * 2]
        
        if (result_1 != rcx_3)
            do
                if (*result == arg2)
                    result = (result - result_1) s>> 4
                    
                    if (result.d != 0xffffffff)
                        int32_t rcx_6 = rdx.d - result.d - 1
                        
                        if (rcx_6 s>= 1)
                            rcx_6 = 1
                        
                        if (rcx_6 != 0)
                            memcpy(&result_1[sx.q(result.d) * 2], 
                                &result_1[sx.q(rdx.d - rcx_6) * 2], rcx_6 << 4)
                            rdx = zx.q(rdi_3[1].d)
                        
                        rdi_3[1].d = (rdx - 1).d
                        result = sub_1405a5010(rdi_3)
                    
                    break
                
                result = &result[2]
            while (result != rcx_3)
        
        rbx = &rbx[2]
    while (rbx != rbp_2)
    
    rdi = zx.q(r14_2[1].d)

if (rdi.d s< 0)
    r14_2[1].d = 0
    int32_t i_1 = neg.d(rdi.d)
    
    if (*(r14_2 + 0xc) s< 0)
        sub_1405a4f90(r14_2)
    
    result = (sx.q(rdi.d) << 4) + *r14_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            *result = 0
            result[1].d = 0
            result = &result[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rdi.d s>= 1)
    r14_2[1].d = 0
    return sub_1405a5010(r14_2)

return result
