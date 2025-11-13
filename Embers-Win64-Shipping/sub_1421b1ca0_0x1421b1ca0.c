// 函数: sub_1421b1ca0
// 地址: 0x1421b1ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58
sub_1407453e0(&var_58, arg1 + 0x48)
void* var_48
int32_t i_1

for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
    *(*(*var_58 + (sx.q(i) << 3)) + 0x200) = 0xffffffff
    int32_t var_4c
    int32_t var_40 = var_40 & not.d(var_4c)
    void var_50
    sub_14059bdd0(&var_50)

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) != 0)
    sub_1405c5570(arg1 + 0x48, 0)

*(arg1 + 0x78) = 0xffffffff
*(arg1 + 0x7c) = 0
sub_14059a8e0(arg1 + 0x58, 0)

if (data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0 && data_1439c88a8 != 0
        && data_1439c7a17 != 0 && data_1439c7a0c != 0)
    int64_t* rbx_1 = *(arg1 + 0x80)
    
    if (rbx_1 != 0)
        if (sub_140a80f40() != 0)
        label_1421b1dd1:
            (*(*rbx_1 + 0x30))(rbx_1)
            (*(rbx_1[7] + 0x30))(&rbx_1[7])
            (*(rbx_1[0xe] + 0x30))(&rbx_1[0xe])
            (*(rbx_1[0x12] + 0x30))(&rbx_1[0x12])
        else
            if (data_143f138f4 == 0)
                if (data_143de5480 == 0)
                    goto label_1421b1dd1
                
                uint32_t rax_7
                rax_7.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_7.b != 0)
                    goto label_1421b1dd1
            
            void var_88
            void** rax_12 = sub_1421b13f0(&var_88, nullptr, 0xff)
            *(*rax_12 + 0x10) = rbx_1
            void* rcx_11 = *rax_12
            int32_t r8_1 = rax_12[2].d
            int64_t* rdx_2 = rax_12[1]
            int64_t* rbx_2 = *(rcx_11 + 0x20)
            int64_t* arg_10 = rbx_2
            int32_t* rbp_1 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rbp_1 += 1
                rbx_2 = arg_10
            
            sub_1407c9450(rcx_11, rdx_2, r8_1, 1)
            
            if (rbx_2 != 0)
                int32_t rax_13 = *rbp_1
                *rbp_1 -= 1
                
                if (rax_13 == 1)
                    sub_140a2f6e0(arg_10)

int64_t rbx_3 = *(arg1 + 0x80)
int64_t arg_8 = rbx_3
int64_t* result

if (sub_140a80f40() == 0)
    uint32_t rax_15
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_15.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_15.b == 0))
        void var_70
        int64_t* rax_16 = sub_1421b0d60(&var_70, nullptr, 0xff)
        *(*rax_16 + 0x10) = rbx_3
        void* rcx_17 = *rax_16
        int32_t r8_2 = rax_16[2].d
        int64_t* rdx_5 = rax_16[1]
        int64_t* rbx_4 = *(rcx_17 + 0x20)
        int64_t* arg_18 = rbx_4
        int32_t* rbp_2 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rbp_2 += 1
            rbx_4 = arg_18
        
        result = sub_1407c9450(rcx_17, rdx_5, r8_2, 1)
        
        if (rbx_4 != 0)
            int32_t rdi_1 = *rbp_2
            *rbp_2 -= 1
            
            if (rdi_1 == 1)
                result = sub_140a2f6e0(arg_18)
    else
        int64_t arg_20 = rbx_3
        result = sub_1421abf40(&arg_20)
else
    result = sub_1421abf40(&arg_8)

*(arg1 + 0x80) = 0
return result
