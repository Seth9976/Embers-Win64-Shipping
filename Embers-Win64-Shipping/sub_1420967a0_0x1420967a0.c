// 函数: sub_1420967a0
// 地址: 0x1420967a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
int64_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"ImageWrapper", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, rbx)
void* result = nullptr
int16_t* const rbx_1 = &data_142d40450
char* var_48 = nullptr
int64_t var_40 = 0
int16_t* const rdx_1

if (arg1[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg1

if (sub_140b1ef70(&var_48, rdx_1, 0) != 0)
    int64_t var_18[0x2]
    int64_t* rax_2 = sub_140b19c30(&var_18, arg1, 0)
    
    if (rax_2[1].d != 0)
        rbx_1 = *rax_2
    
    int32_t rax_3 = sub_140a54510(rbx_1, &data_1432ae450)
    int64_t rcx_4 = var_18[0]
    rbx_1.b = rax_3 == 0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    if (rbx_1.b == 0)
        result = sub_1420965a0(&var_48)
    else
        sub_1420486b0(&var_18, var_48, var_40:4.d)
        
        if (sub_142060e40(&var_18) != 0)
            char* var_38 = nullptr
            int32_t var_30_1 = 0
            sub_142057980(&var_18, &var_38)
            void* var_28
            sub_141fa4960(&var_28, var_38, var_30_1)
            
            if (sub_141fba7f0(&var_28) != 0)
                int32_t rax_6 = sub_141fab120(&var_28)
                void* rdx_6 = var_28
                arg_8 = 0
                void* result_1 = sub_1423bea40(*(rdx_6 + 0xc), *(rdx_6 + 8), rax_6, 0)
                result = result_1
                
                if (result_1 != 0)
                    int64_t rax_7 = sub_140bcb6b0(**(*(result_1 + 0xd0) + 0x18) + 0x10, 2)
                    uint32_t count = sub_140bc7f20(**(*(result + 0xd0) + 0x18) + 0x10)
                    memcpy(rax_7, sub_141fb3da0(&var_28, 0), count)
                    sub_140bd1d40(**(*(result + 0xd0) + 0x18) + 0x10)
                    (*(*result + 0x2f8))(result)
            
            char* rcx_24 = var_38
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)

char* rcx_26 = var_48

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return result
