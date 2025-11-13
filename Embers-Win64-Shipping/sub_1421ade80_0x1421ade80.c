// 函数: sub_1421ade80
// 地址: 0x1421ade80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[2]
int64_t rsi = 0
void* r15 = arg2
void* var_58 = rax
int64_t* rbx = arg1
void* const i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_48 = 0xffffffff
int16_t var_44 = 0x101
char var_42 = 0
sub_140be1ff0(&var_58)
void* const i = i_2

if (i != 0)
    int64_t* r14_1 = r15 + 0x440
    
    do
        int64_t* rax_1 = sub_141fee270(i, rbx)
        int64_t* rdi_1 = rax_1
        
        if (rax_1 != 0)
            void* rax_2 = sub_14249ec80()
            void* rdx_1 = rdi_1[2]
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            int64_t* r12_1
            
            if (rax_3.d s<= *(rdx_1 + 0x38))
                r12_1 = rdi_1
            
            if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                r12_1 = nullptr
            
            void* rax_5 = sub_14249f4b0()
            void* rdx_2 = rdi_1[2]
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rdi_1 = nullptr
            
            int64_t j
            int32_t rbp_1
            
            if (r12_1 != 0)
                j = r12_1[8]
                rbp_1 = 1
            label_1421adf8b:
                int64_t rax_8 = sx.q(*(r15 + 0x448))
                int64_t rcx_4 = 0
                
                if (rax_8.d s<= 0)
                label_1421adfb5:
                    int64_t r15_1 = sx.q(r14_1[1].d)
                    int32_t rax_10 = (r15_1 + 1).d
                    r14_1[1].d = rax_10
                    
                    if (rax_10 s> *(r14_1 + 0xc))
                        sub_1408888d0(r14_1)
                    
                    int64_t r15_2 = r15_1 << 7
                    int64_t zmm0_1 = memset(*r14_1 + r15_2, 0, 0x80)
                    *(r15_2 + *r14_1) = j
                    *(r15_2 + *r14_1 + 8) = rbp_1.b
                    *(r15_2 + *r14_1 + 0x30) = 0
                    int32_t var_78
                    int64_t var_70
                    
                    if (rbp_1 == 1)
                        int64_t rbx_2 = *r14_1
                        int512_t zmm1
                        zmm1.o = zx.o(0)
                        (*(*r12_1 + 0x280))(r12_1, zmm1, 0, 0, var_78, var_70)
                        *(rbx_2 + r15_2 + 0xc) = zmm0_1.d
                        *(r15_2 + *r14_1 + 0x10) = r12_1[0xa].d
                    else if (rbp_1 == 3)
                        int64_t rbx_1 = *r14_1
                        var_70 = 0
                        int512_t zmm2
                        zmm2.o = zx.o(0)
                        var_78 = 0
                        void var_68
                        int64_t* rax_15 = (*(*rdi_1 + 0x280))(rdi_1, &var_68, zmm2, 0, 0, 0)
                        *(rbx_1 + r15_2 + 0x14) = *rax_15
                        *(rbx_1 + r15_2 + 0x1c) = rax_15[1].d
                        int64_t rcx_9 = *r14_1
                        *(r15_2 + rcx_9 + 0x20) = rdi_1[0xe]
                        *(r15_2 + rcx_9 + 0x28) = rdi_1[0xf].d
                    r15 = arg2
                else
                    int64_t* rax_9 = *r14_1
                    
                    while (*rax_9 != j)
                        rcx_4 += 1
                        rax_9 -= -0x80
                        
                        if (rcx_4 s>= rax_8)
                            goto label_1421adfb5
                
                rbx = arg1
            else if (rdi_1 != 0)
                j = rdi_1[0xa]
                rbp_1 = 3
                goto label_1421adf8b
        
        void* i_1 = *(i + 0x20)
        sub_140be1ff0(&var_58)
        i = i_1
    while (i != 0)

int32_t* result = (*(*rbx + 0x330))(rbx)
int64_t* result_1 = result

if (result != 0)
    result = sub_140b5b8a0(*result, 0)
    int32_t rcx_14
    rcx_14.b = *(result_1 + 4) != 0
    rcx_14.b |= result.b == 0
    
    if (rcx_14.b != 0)
        int64_t rax_21 = sx.q(*(r15 + 0x448))
        
        if (rax_21.d s> 0)
            result = *(r15 + 0x440)
            
            do
                if (*result == *result_1)
                    return result
                
                rsi += 1
                result -= -0x80
            while (rsi s< rax_21)
        
        int64_t rbx_3 = sx.q(*(r15 + 0x448))
        int32_t rax_22 = (rbx_3 + 1).d
        *(r15 + 0x448) = rax_22
        
        if (rax_22 s> *(r15 + 0x44c))
            sub_1408888d0(r15 + 0x440)
        
        int64_t rbx_4 = rbx_3 << 7
        memset(*(r15 + 0x440) + rbx_4, 0, 0x80)
        *(rbx_4 + *(r15 + 0x440)) = *result_1
        result = *(r15 + 0x440)
        result[rbx_3 * 0x20 + 2].b = 1

return result
