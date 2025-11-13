// 函数: sub_1423487e0
// 地址: 0x1423487e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg3
int64_t* rdi = arg4
int32_t rsi = arg2

if (arg3 != 0 && *(arg1 + 0x122) == 0 && arg4[1].d s> 0)
    int32_t i = 0
    
    if (*(arg1 + 0x108) s> 0)
        int64_t r13_1 = 0
        
        do
            int64_t* rdi_2 = *(arg1 + 0x100) + r13_1
            void* rbp_1 = *(**rdi_2 + (sx.q(rdi_2[1].d) << 3))
            
            if (*(rbp_1 + 0xec) u> 0)
                char rsi_1 = (*(arg1 + 0x68)).b
                sub_141997e80(&rdi_2[2])
                void* r15_1 = rdi_2[0x14]
                int32_t rdx_1 = *(rbp_1 + 8)
                void* var_80 = rbp_1 + 0x30
                int64_t var_70_1 = rdi_2[0x15]
                void* var_78_1 = r15_1
                void* var_60_1 = rbp_1 + 0x1c0
                int32_t var_58_1 = *(rbp_1 + 0xec)
                void* var_68_1 = &rdi_2[2]
                sub_140865380(rdi_2 + 0x80, rdx_1)
                int32_t j = 0
                
                if (*(rbp_1 + 8) s> 0)
                    do
                        int32_t rax_6 = sub_1422c5b90(r15_1)
                        void** rdx_2 = &var_80
                        
                        if (rax_6 == 0)
                            sub_142322530(rdi_2 + 0x80, rdx_2, rsi_1)
                        else if (rax_6 != 1)
                            sub_142322310(rdi_2 + 0x80, rdx_2, rsi_1)
                        else
                            sub_1423220f0(rdi_2 + 0x80, rdx_2, rsi_1)
                        
                        j += 1
                    while (j s< *(rbp_1 + 8))
            
            i += 1
            r13_1 += 0xb0
        while (i s< *(arg1 + 0x108))
        
        r15 = arg3
        rdi = arg4
        rsi = arg2
    
    *(arg1 + 0x122) = 1

void*** rbx_2

if (data_143a2ff18 != 0)
    EnterCriticalSection(&data_143f58c08)
    int32_t rdx_3 = data_143f58d30
    int32_t rax_9 = data_143f59100
    data_143f59104 += 1
    
    if (rdx_3 s<= rax_9)
        rax_9 = rdx_3
    
    data_143f59100 = rax_9
    
    if (rdx_3 s<= 0)
        void*** rax_12 = j_sub_140a82f30(0x110)
        
        if (rax_12 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = sub_1423298a0(rax_12)
    else
        void**** rcx_6 = data_143f58d28
        int32_t rax_10 = rdx_3 - 1
        rbx_2 = *rcx_6
        
        if (rax_10 s>= 1)
            rax_10 = 1
        
        if (rax_10 != 0)
            memcpy(rcx_6, &rcx_6[sx.q(rdx_3 - rax_10)], rax_10 << 3)
            rdx_3 = data_143f58d30
        
        data_143f58d30 = rdx_3 - 1
        sub_1405c53d0(&data_143f58d28)
    
    LeaveCriticalSection(&data_143f58c08)
else
    void*** rax_7 = j_sub_140a82f30(0x110)
    
    if (rax_7 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_1423298a0(rax_7)

float zmm1[0x4] = sub_142339ca0(rbx_2, r15, *(arg1 + 0x40), rsi, rdi, arg5, arg6)
int32_t rdi_4 = 0
int32_t rsi_3 = data_14399fa50 + 1
int64_t* rbp_2 = nullptr

if (r15 != 0)
    void* rcx_9 = r15[0x7d]
    
    if (rcx_9 != 0)
        int64_t* rcx_10 = *(rcx_9 + 0x108)
        rsi_3 = (*(*rcx_10 + 0x2c8))(rcx_10) + 1
        int64_t* rcx_12 = *(r15[0x7d] + 0x108)
        int64_t rdx_8 = *rcx_12
        rbp_2 = (*(rdx_8 + 0x260))(rcx_12, rdx_8)
        void* rax_19 = sub_140d3c6e0(&r15[0x87])
        
        if (rax_19 == 0)
            rdi_4 = r15[0x93].d
        else
            rdi_4 = *(rax_19 + 0x498)

int32_t var_98 = rsi_3
int32_t var_94 = rdi_4
int64_t* var_88 = rbp_2
char rax_20 = sub_140a80f40()

if (rax_20 == 0)
    if (data_143f138f4 != rax_20)
    label_142348b5f:
        void var_b8
        int64_t* rax_23 = sub_142333150(&var_b8, nullptr, 0xff)
        void* rcx_16 = *rax_23
        *(rcx_16 + 0x10) = arg1.o
        *(rcx_16 + 0x20) = rbx_2.o
        void* rcx_17 = *rax_23
        int32_t r8_4 = rax_23[2].d
        int64_t* rdx_10 = rax_23[1]
        int64_t* rbx_3 = *(rcx_17 + 0x38)
        int64_t* arg_8 = rbx_3
        int32_t* rdi_5 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rdi_5 += 1
            rbx_3 = arg_8
        
        int32_t result = sub_1407c96b0(rcx_17, rdx_10, r8_4, 1)
        
        if (rbx_3 != 0)
            result = *rdi_5
            *rdi_5 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_8)
        
        return result
    
    if (data_143de5480 != rax_20)
        uint32_t rax_21
        rax_21.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_21.b == 0)
            goto label_142348b5f

int32_t var_c8_1 = rdi_4
int64_t* var_d0
var_d0.d = rsi_3
return sub_142348ef0(arg1, rbp_2, &data_143f02b98, rbx_2, zmm1, 0, var_d0.d)
