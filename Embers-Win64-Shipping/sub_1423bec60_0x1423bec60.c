// 函数: sub_1423bec60
// 地址: 0x1423bec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg3)
int64_t i = 0
int64_t* rbx_2 = ((r13 + 3) << 7) + arg1

do
    if (i s>= r13)
        int32_t j = 0
        
        if (rbx_2[1].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                void* rdi_1 = *(r14_1 + *rbx_2)
                int32_t rax_2 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_2 == 1)
                    int64_t* rax_3 = sub_140a242a0()
                    (**rax_3)(rax_3, rdi_1, zx.q(*(rdi_1 + 8)), zx.q(arg2))
                
                j += 1
                r14_1 = &r14_1[1]
            while (j s< rbx_2[1].d)
    
    rbx_2[1].d = 0
    
    if (*(rbx_2 + 0xc) s<= 0xffffffff)
        sub_1405c5570(rbx_2, 0)
    
    i += 1
    rbx_2 = &rbx_2[2]
while (i s< 8)

int64_t i_1 = 0
int32_t* rdi_3 = arg1 + 0x588 + (r13 << 7)
int32_t result

do
    if (i_1 s>= r13)
        int32_t j_1 = 0
        
        if (*rdi_3 s> 0)
            int64_t* r14_2 = nullptr
            
            do
                void* rbx_4 = *(r14_2 + *(rdi_3 - 8))
                int32_t rax_6 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_6 == 1)
                    int64_t* rax_7 = sub_140a242a0()
                    (**rax_7)(rax_7, rbx_4, zx.q(*(rbx_4 + 8)), zx.q(arg2))
                
                j_1 += 1
                r14_2 = &r14_2[1]
            while (j_1 s< *rdi_3)
    
    result = rdi_3[1]
    *rdi_3 = 0
    
    if (result s< 0 && rdi_3[1] != 0)
        result = sub_1405c5570(&rdi_3[-2], 0)
    
    i_1 += 1
    rdi_3 = &rdi_3[4]
while (i_1 s< 8)

return result
