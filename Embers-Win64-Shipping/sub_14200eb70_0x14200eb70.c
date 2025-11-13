// 函数: sub_14200eb70
// 地址: 0x14200eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    return &__return_addr

uint64_t* rax = j_sub_140a82f30(0x50)
uint64_t* rsi_1 = rax

if (rax == 0)
    rsi_1 = nullptr
else
    __builtin_memset(rax, 0, 0x50)

rsi_1[2].d = sub_140b1a4c0()
*(rsi_1 + 0x18) = data_143de54b0
*(rsi_1 + 0x38) = data_143de54c0

if (data_143f5b298 != 0)
    if (data_143de5426 == 0)
        data_143f5b298
        
        if (sub_1405949a0() == 0)
            if (rsi_1[5] != u"Game")
                int32_t rdx_3 = 0
                rsi_1[6].d = 0
                
                if (*(rsi_1 + 0x34) != 5)
                    sub_1405947f0(&rsi_1[5], 5)
                    rdx_3 = rsi_1[6].d
                
                rsi_1[6].d = rdx_3 + 5
                
                if (rdx_3 + 5 s> *(rsi_1 + 0x34))
                    sub_140594770(&rsi_1[5])
                
                uint64_t* rcx_11 = rsi_1[5]
                *rcx_11 = 0x65006d00610047
                rcx_11[1].w = 0
        else if (rsi_1[5] != u"Editor")
            int32_t rdx_2 = 0
            rsi_1[6].d = 0
            
            if (*(rsi_1 + 0x34) != 7)
                sub_1405947f0(&rsi_1[5], 7)
                rdx_2 = rsi_1[6].d
            
            rsi_1[6].d = rdx_2 + 7
            
            if (rdx_2 + 7 s> *(rsi_1 + 0x34))
                sub_140594770(&rsi_1[5])
            
            uint64_t* rcx_8 = rsi_1[5]
            *rcx_8 = 0x74006900640045
            rcx_8[1].d = 0x72006f
            *(rcx_8 + 0xc) = 0
    else if (rsi_1[5] != u"Commandlet")
        int32_t rdx_1 = 0
        rsi_1[6].d = 0
        
        if (*(rsi_1 + 0x34) != 0xb)
            sub_1405947f0(&rsi_1[5], 0xb)
            rdx_1 = rsi_1[6].d
        
        rsi_1[6].d = rdx_1 + 0xb
        
        if (rdx_1 + 0xb s> *(rsi_1 + 0x34))
            sub_140594770(&rsi_1[5])
        
        __builtin_wcscpy(rsi_1[5], u"Commandlet")
else if (rsi_1[5] != u"Unknown")
    int32_t rdx = 0
    rsi_1[6].d = 0
    
    if (*(rsi_1 + 0x34) != 8)
        sub_1405947f0(&rsi_1[5], 8)
        rdx = rsi_1[6].d
    
    rsi_1[6].d = rdx + 8
    
    if (rdx + 8 s> *(rsi_1 + 0x34))
        sub_140594770(&rsi_1[5])
    
    *rsi_1[5] = *u"Unknown"

void* rcx_12 = data_143f5b298
char* rbx_1 = nullptr

if (rcx_12 != 0)
    char** rax_8 = *(rcx_12 + 0xc38)
    void* rcx_14 = &rax_8[sx.q(*(rcx_12 + 0xc40))]
    
    if (rax_8 != rcx_14)
        do
            char* r8_1 = *rax_8
            char rdx_4 = *r8_1
            
            if (rdx_4 == 1)
                rbx_1 = r8_1
                break
            
            if (rdx_4 != 3)
                if (rdx_4 == 2 && rbx_1 == 0)
                    rbx_1 = r8_1
            else if (rbx_1 == 0 || *rbx_1 != rdx_4)
                rbx_1 = r8_1
            
            rax_8 = &rax_8[1]
        while (rax_8 != rcx_14)
        
        if (rbx_1 != 0)
            void* rcx_15 = *(rbx_1 + 0x278)
            
            if (rcx_15 != 0)
                int64_t var_38
                sub_140597df0(rsi_1, sub_142436cb0(rcx_15, &var_38))
                int64_t rcx_17 = var_38
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                *(rsi_1 + 0x14) = sub_1424385d0(*(rbx_1 + 0x278))
                rsi_1[9].d = *(*(rbx_1 + 0x278) + 0x520)

int64_t* rcx_20 = *arg2
void* r15_1 = *arg1
int128_t* rax_13 = (*(*rcx_20 + 0x48))(rcx_20)
int128_t* var_68 = nullptr
int32_t var_60_1 = 1
sub_1405a4f90(&var_68)
int64_t rbx_3 = sx.q(var_60_1)
int128_t* r14_1 = var_68
*r14_1 = *rax_13
uint64_t var_58 = 0
int32_t var_50_1 = rbx_3.d
int32_t var_4c

if (rbx_3.d != 0)
    sub_1405a4be0(&var_58, rbx_3.d, 0)
    memcpy(var_58, r14_1, (rbx_3 << 4).d)
else
    __builtin_memset(&var_4c, 0, 0x14)
int64_t arg_18 = 0
int64_t arg_8 = 0x2bca2875f4373fff
int64_t* var_70_1 = &arg_8
int64_t* var_78_1 = &arg_18
int128_t var_48
sub_14200dcd0(r15_1, rsi_1, sub_141cbc3a0(), 0, &var_48, &var_58)
int64_t* rbx_4 = var_48:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))
    
    r14_1 = var_68

uint64_t rcx_27 = var_58

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return sub_140a74f90(r14_1)
