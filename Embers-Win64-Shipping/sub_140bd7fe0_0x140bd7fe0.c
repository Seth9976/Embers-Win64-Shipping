// 函数: sub_140bd7fe0
// 地址: 0x140bd7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* i = *(arg1 + 0x40)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x48))]; i != rbp_2; i = &i[1])
    bool cond:1_1 = data_1439a9aa8 == data_1439a9ad4
    int128_t var_38 = *i
    void* rbx_1 = var_38.q
    void* arg_10
    
    if (cond:1_1)
    label_140bd809c:
        arg_10 = arg1
        int128_t* var_28 = &var_38
        void** var_20_1 = &arg_10
        void arg_8
        sub_140b92920(&data_1439a9aa0, &arg_8, &var_28, nullptr)
    else
        arg_10 = rbx_1
        int32_t rax_3 = sub_140b5ead0(rbx_1.d) + arg_10:4.d
        void* rcx_3 = data_1439a9ae0
        void* rax_5 = &data_1439a9ad8
        
        if (rcx_3 != 0)
            rax_5 = rcx_3
        
        int32_t rax_6 = *(rax_5 + ((sx.q(data_1439a9ae8 - 1) & sx.q(rax_3)) << 2))
        
        if (rax_6 == 0xffffffff)
            goto label_140bd809c
        
        int64_t r8_1 = data_1439a9aa0
        int64_t rcx_4
        
        while (true)
            rcx_4 = sx.q(rax_6)
            int64_t rdx_3 = rcx_4 * 3
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx_1)
                break
            
            rax_6 = *(r8_1 + (rdx_3 << 3) + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_140bd809c
        
        if (rax_6 == 0xffffffff)
            goto label_140bd809c
        
        void* rcx_5 = r8_1 + rcx_4 * 0x18
        
        if (rcx_5 == 0)
            goto label_140bd809c
        
        void* rcx_6 = *(rcx_5 + 8)
        
        if (rcx_6 == 0 || ((*(rcx_6 + 8) u>> 0xe).b & 1) != 0)
            goto label_140bd809c
        
        if (rcx_6 != arg1)
            sub_140d21d80(rcx_6)
            sub_140cde0b0()
