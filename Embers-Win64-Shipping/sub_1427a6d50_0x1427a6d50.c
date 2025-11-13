// 函数: sub_1427a6d50
// 地址: 0x1427a6d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* var_88
int128_t var_78
int64_t var_58[0x2]
int128_t* var_48

if (*(arg1 + 0x30) s<= 0)
    int64_t* i = *(arg1 + 0x18)
    
    for (void* r15_1 = &i[sx.q(*(arg1 + 0x20))]; i != r15_1; i = &i[1])
        int64_t rax_9 = *arg2
        int128_t* rcx_4 = nullptr
        void* r14_1 = *i
        var_88 = nullptr
        
        if (rax_9 != 0)
            void* rax_7 = arg2[2]
            void* rcx_5 = &arg2[4]
            
            if (rax_7 != 0)
                rcx_5 = rax_7
            
            (**rcx_5)(rcx_5, &var_88)
            rcx_4 = var_88
        
        int128_t zmm0 = var_78
        var_58[0] = rax_9
        
        if (rax_9 != 0)
            rax_9 = 0
        
        var_48 = rcx_4
        var_88 = nullptr
        int128_t var_38_1 = zmm0
        int128_t var_68
        int128_t var_28_1 = var_68
        int64_t* rax_10 = sub_14279b1e0(r14_1 + 0x1a0, &var_58)
        
        if (rax_9 != 0)
            int128_t* rdx_8 = var_88
            int128_t* rcx_7 = &var_78
            
            if (rdx_8 != 0)
                rcx_7 = rdx_8
            
            int64_t rdx_9 = *rcx_7
            (*(rdx_9 + 0x10))(rcx_7, rdx_9)
        
        if (rax_10 != 0)
            return *rax_10
else
    int64_t rax = *arg2
    int64_t var_98_1 = rax
    int128_t* rdx = nullptr
    var_88 = nullptr
    
    if (rax != 0)
        void* rax_1 = arg2[2]
        void* rcx = &arg2[4]
        
        if (rax_1 != 0)
            rcx = rax_1
        
        (**rcx)(rcx, &var_88)
        rdx = var_88
        rax = var_98_1
    
    var_58[0] = rax
    var_48 = nullptr
    
    if (rax != 0)
        int128_t* rcx_1 = &var_78
        
        if (rdx != 0)
            rcx_1 = rdx
        
        (**rcx_1)(rcx_1, &var_48)
    
    int64_t* rax_4 = sub_14279b440(arg1 + 0x28, &var_58)
    
    if (var_98_1 != 0)
        int128_t* rdx_4 = var_88
        int128_t* rcx_3 = &var_78
        
        if (rdx_4 != 0)
            rcx_3 = rdx_4
        
        int64_t rdx_5 = *rcx_3
        (*(rdx_5 + 0x10))(rcx_3, rdx_5)
    
    if (rax_4 != 0)
        return *rax_4
return 0
