// 函数: sub_1408f7ec0
// 地址: 0x1408f7ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* const i = arg1
int32_t rcx
rcx.b = sub_140b5b8a0(arg2.d, 0) == 0

if ((arg_10:4.d != 0 | rcx.b) != 0 && i != 0)
    void* const i_2 = i
    void* const i_1
    
    do
        i_1 = i
        void* const j_1
        
        if (i == 0)
            j_1 = nullptr
        else
            j_1 = *(i + 0x50)
        
        int32_t var_28_1 = 0xffffffff
        int16_t var_24_1 = 0x101
        char var_22_1 = 0
        sub_1406328d0(&i_1)
        void* j_2
        
        for (void* const j = j_1; j != 0; j = j_2)
            int64_t rax_2 = *(j + 0x28)
            int64_t arg_18 = rax_2
            
            if (rax_2 == arg_10)
                return j
            
            j_2 = *(j + 0x20)
            sub_1406328d0(&i_1)
        
        i = *(i + 0x20)
        void* rax_3
        int64_t rax_4
        void* rdx
        
        if (i != 0)
            rax_3 = sub_140be01c0()
            rdx = *(i + 0x10)
            rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (i == 0 || rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            i = nullptr
    while (i != 0)
    
    int64_t* rax_6 = sub_140d21830(i_2, &i_1, 0, 0)
    int16_t* const rbx = &data_142d40450
    int16_t* const rdi_1
    
    if (rax_6[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *rax_6
    
    int64_t var_48
    int64_t* rax_8 = sub_140b63b70(&arg_10, &var_48)
    int16_t* const rsi_1
    
    if (rax_8[1].d == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *rax_8
    
    sub_140cea340()
    int16_t* var_58
    sub_140b63b70(&data_143e1b820, &var_58)
    int16_t* const var_60_1 = rdi_1
    int32_t var_50
    
    if (var_50 != 0)
        rbx = var_58
    
    int16_t* const var_68_1 = rsi_1
    sub_140af98a0("Unknown", 0x163f, u"Failed to find %s %s in %s", rbx)
    int16_t* rcx_6 = var_58
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    void* const i_3 = i_1
    
    if (i_3 != 0)
        sub_140a74f90(i_3)
    
    sub_140afbb40()

return 0
