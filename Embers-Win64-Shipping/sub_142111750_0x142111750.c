// 函数: sub_142111750
// 地址: 0x142111750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
void* result = __security_cookie ^ &var_b8
void* result_2 = result
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    result = sub_1405c5570(arg2, 0)

int32_t i_5 = arg3[1].d
int64_t* rbx = *arg3

if (i_5 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_5
        i_5 -= 1
    while (i != 1)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    result = sub_1405a5410(arg3, 0)

int64_t* r13 = arg1[(sx.q(arg4) << 2) + sx.q(arg5) + 0x4a]

if (r13 != 0)
    int32_t rsi_1 = 0
    void var_78
    void* rdi = &var_78
    
    for (int32_t i_1 = 0; i_1 u< 5; )
        int64_t rax_1 = sub_142129130(r13, i_1)
        i_1 += 1
        *rdi = rax_1
        rdi += 8
        rsi_1 += *(rax_1 + 8)
    
    int32_t i_6 = arg3[1].d
    int64_t* rbx_1 = *arg3
    
    if (i_6 != 0)
        int32_t i_2
        
        do
            int64_t rcx_6 = *rbx_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_1 = &rbx_1[2]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != rsi_1)
        sub_1405a5410(arg3, rsi_1)
    
    result = &var_78
    int32_t i_4 = 0
    void* result_1 = &var_78
    int32_t i_3
    
    do
        int64_t* rax_2 = *result
        void* j = *rax_2
        
        if ((j.b & 1) != 0)
            j = (j s>> 1) + rax_2
        
        for (void* rbp_1 = j + sx.q(rax_2[1].d) * 0x28; j != rbp_1; j += 0x28)
            void* const k_1 = nullptr
            sub_1421487d0(j, arg1, r13, &k_1)
            void* const k = k_1
            
            if (k != 0)
                uint64_t rdx_3 = *arg2
                int64_t rdi_1 = sx.q(arg2[1].d)
                int64_t* rbx_2 = rdx_3
                int64_t rsi_2 = rdi_1 << 3
                int64_t rax_4 = rsi_2 + rdx_3
                int32_t rbx_4
                
                if (rdx_3 != rax_4)
                    while (*rbx_2 != k)
                        rbx_2 = &rbx_2[1]
                        
                        if (rbx_2 == rax_4)
                            goto label_1421118f1
                    
                    rbx_4 = ((rbx_2 - rdx_3) s>> 3).d
                
                if (rdx_3 == rax_4 || rbx_4 == 0xffffffff)
                label_1421118f1:
                    int32_t rax_5 = (rdi_1 + 1).d
                    arg2[1].d = rax_5
                    
                    if (rax_5 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                        k = k_1
                    
                    rbx_4 = rdi_1.d
                    *(rsi_2 + *arg2) = k
                
                int64_t rdi_2 = sx.q(arg3[1].d)
                
                if (rbx_4 s>= rdi_2.d)
                    int32_t rax_7 = rdi_2.d + rbx_4 - rdi_2.d + 1
                    arg3[1].d = rax_7
                    
                    if (rax_7 s> *(arg3 + 0xc))
                        sub_1405a4f90(arg3)
                    
                    memset((rdi_2 << 4) + *arg3, 0, sx.q(rbx_4 - rdi_2.d + 1) << 4)
                
                int64_t* rbx_7 = (sx.q(rbx_4) << 4) + *arg3
                int64_t rdi_3 = sx.q(rbx_7[1].d)
                int32_t rax_8 = (rdi_3 + 1).d
                rbx_7[1].d = rax_8
                
                if (rax_8 s> *(rbx_7 + 0xc))
                    sub_1405a4cf0(rbx_7)
                
                *(*rbx_7 + (rdi_3 << 2)) = *(j + 0x20)
        
        i_3 = i_4 + 1
        result = result_1 + 8
        i_4 = i_3
        result_1 = result
    while (i_3 u< 5)

__security_check_cookie(result_2 ^ &var_b8)
return result
