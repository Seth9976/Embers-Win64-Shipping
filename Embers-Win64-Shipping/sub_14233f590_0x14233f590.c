// 函数: sub_14233f590
// 地址: 0x14233f590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84
int32_t var_84_1 = var_84 & 0xffffff00
char var_138 = 1
int64_t var_130 = 0
int64_t var_128 = 0
char var_118 = 0
int64_t var_110
__builtin_memset(&var_110, 0, 0x88)
int32_t var_88 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_138)
sub_140597700(&var_138)
int64_t var_158 = *(arg4 + 0x18)
int64_t rax_1 = *(arg4 + 0x20)
int64_t* rax_2 = *(arg4 + 0x28)

if (rax_2 != 0)
    rax_2[1].d += 1

if (sub_140d6df00(&var_158) == 0)
    var_138 = 0
    int64_t var_130_2 = 0
    int64_t var_128_2 = 0
    char var_118_2 = 0
    int64_t var_110_2
    __builtin_memset(&var_110_2, 0, 0x88)
label_14233f843:
    int32_t var_84_2 = var_84_1 & 0xffffff00
    int32_t var_88_1 = 0x20702
    sub_1405979f0(arg1 + 0x10, &var_138)
    sub_140597700(&var_138)
else
    int32_t var_78
    sub_140a3ef70(arg1 + 0xc8, &var_78)
    int64_t* var_70
    *var_70 = var_158
    var_70[1] = rax_1
    var_70[2] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    var_70[3].b = 0
    var_70[4].d = 0xffffffff
    int64_t rbx_1 = *var_70
    void arg_8
    sub_1423345e0(arg1 + 0xc8, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_70, var_78, 
        nullptr)
    
    if (*(arg1 - 0x98) != 0)
        void* rsi_2 = arg1 - 0xc8
        int32_t* rax_10 = (*(*rsi_2 + 0x18))(rsi_2, &arg_8)
        
        if (*rax_10 != data_143dbb180.d || rax_10[1] != data_143dbb180:4.d)
            rax_10.b = 1
        else
            rax_10.b = 0
        
        if (rax_10.b != 0)
            int64_t rcx_9 = var_158
            
            if (arg1 == 0xd0)
                rsi_2 = nullptr
            
            if (rax_2 != 0)
                rax_2[1].d += 1
            
            int32_t var_60_1 = *(arg4 + 0xc)
            void* var_68 = rsi_2
            int64_t var_58_1 = rcx_9
            int64_t var_50_1 = rax_1
            
            if (rax_2 != 0)
                rax_2[1].d += 1
            
            int32_t var_3c_1 = 0x3f800000
            int32_t var_40_1 = 1
            char var_38_1 = 0
            
            if (rax_2 != 0)
                rax_2[1].d -= 1
                
                if (rax_2[1].d == 1)
                    (**rax_2)(rax_2)
                    int32_t temp4_1 = *(rax_2 + 0xc)
                    *(rax_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rax_2 + 8))(rax_2, 1)
            
            int64_t* rcx_12 = *(arg1 - 0x98)
            rsi_2.b = (*(*rcx_12 + 0x48))(rcx_12, &var_68) == 0
            
            if (rax_2 != 0)
                rax_2[1].d -= 1
                
                if (rax_2[1].d == 1)
                    (**rax_2)(rax_2)
                    int32_t temp5_1 = *(rax_2 + 0xc)
                    *(rax_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rax_2 + 8))(rax_2, 1)
            
            if (rsi_2.b != 0)
                var_138 = 0
                int64_t var_130_1 = 0
                int64_t var_128_1 = 0
                char var_118_1 = 0
                int64_t var_110_1
                __builtin_memset(&var_110_1, 0, 0x88)
                goto label_14233f843

sub_140596b00(arg2, arg1 + 0x10)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_2 + 8))(rax_2, 1)

return arg2
