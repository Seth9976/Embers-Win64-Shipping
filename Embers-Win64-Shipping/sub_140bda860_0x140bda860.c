// 函数: sub_140bda860
// 地址: 0x140bda860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_8 = arg1
sub_140bdd9e0()
int64_t rbx = arg_8
int64_t arg_18

if (data_1439a9be8 != data_1439a9c14)
    arg_18 = rbx
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_18:4.d
    void* r8_1 = &data_1439a9c18
    void* rcx_2 = data_1439a9c20
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(data_1439a9c28) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = data_1439a9be0
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_3 = i_1 * 3
            
            if (*(r8_2 + (rcx_3 << 3)) == rbx)
                if (i != 0xffffffff)
                    void* rcx_4 = r8_2 + i_1 * 0x18
                    
                    if (rcx_4 != 0)
                        int64_t* rcx_5 = *(rcx_4 + 8)
                        
                        if (rcx_5 != 0)
                            (**rcx_5)(rcx_5, 1)
                
                break
            
            i = *(r8_2 + (rcx_3 << 3) + 0x10)
        while (i != 0xffffffff)

int64_t* var_18 = &arg_8
int64_t* var_10 = &arg_10
return sub_140a5c490(&data_1439a9be0, &arg_18, &var_18, nullptr)
