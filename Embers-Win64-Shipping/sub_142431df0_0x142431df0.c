// 函数: sub_142431df0
// 地址: 0x142431df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rcx = data_143f5b298
char result = (*(*rcx + 0x398))(rcx)

if (result != 0)
    void* rcx_1 = *(arg1 + 0x30)
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x4c)
    int32_t var_54_1 = 0x80
    int32_t var_50_1 = 0xffffffff
    int32_t var_4c_1 = 0
    int64_t var_40_1 = 0
    int32_t var_38_1 = 0
    int16_t var_a8 = 1
    void* rax_3 = sub_142431b50(rcx_1, 1)
    
    if (rax_3 != 0)
        *(rax_3 + 0x1f6) |= 2
        int128_t var_88
        var_88.q = rax_3
        void* var_b0 = rax_3
        int32_t var_b8
        sub_140b91690(&var_88:8, &var_b8, &var_b0, nullptr)
        *(rax_3 + 0x248) = &var_a8
        int64_t* i = *(arg1 + 0x98)
        
        for (void* rsi_1 = &i[sx.q(*(arg1 + 0xa0))]; i != rsi_1; i = &i[1])
            void* rcx_3 = *i
            
            if (rcx_3 != 0 && (*(rcx_3 + 0xba) & 0x40) == 0)
                void* rax_5 = sub_142431b50(*(rcx_3 + 0x128), 1)
                
                if (rax_5 == 0)
                    goto label_142431f82
                
                *(rax_5 + 0x1f6) |= 2
                var_b0 = rax_5
                sub_140b91690(&var_88:8, &var_b8, &var_b0, nullptr)
                *(rax_5 + 0x248) = &var_a8
        
        int64_t rdi_2 = sx.q(*(arg1 + 0x160))
        int32_t rax_6 = (rdi_2 + 1).d
        *(arg1 + 0x160) = rax_6
        
        if (rax_6 s> *(arg1 + 0x164))
            sub_1407c3920(arg1 + 0x158)
        
        sub_142427ee0(rdi_2 * 0x78 + *(arg1 + 0x158), &var_a8)
    
label_142431f82:
    result = sub_142429280(&var_a8)

__security_check_cookie(rax_1 ^ &var_d8)
return result
