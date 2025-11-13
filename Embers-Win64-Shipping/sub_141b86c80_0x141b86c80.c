// 函数: sub_141b86c80
// 地址: 0x141b86c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0xffffffff
void* rsi = nullptr
void* var_98 = nullptr
int32_t i_1 = 0
int32_t var_8c = 0
int32_t r14 = 0
int64_t var_68 = 0
int32_t var_60 = 0
sub_140d3cc80(sub_141c1b420(), &var_68, 1, 0x10, 0)
int32_t rdx_1 = var_60
int64_t r8_1 = var_68
int32_t rcx_1 = var_58 + 1
int32_t var_58_1 = rcx_1
uint64_t rax_1

if (rcx_1 s< rdx_1)
    while (*(r8_1 + (sx.q(rcx_1) << 3)) == 0)
        rax_1 = zx.q(rcx_1 + 1)
        var_58_1 = rax_1.d
        rcx_1 = rax_1.d
        
        if (rax_1.d s>= rdx_1)
            break

char arg_10
char* arg_18

while (true)
    if (rcx_1 s< 0 || rcx_1 s>= rdx_1)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        break
    
    void* rbx_1 = *(r8_1 + (sx.q(rcx_1) << 3))
    
    if ((*(rbx_1 + 0xcc) & 0x82000001) == 0)
        arg_10.q = *(rbx_1 + 0x18)
        int32_t var_40_1 = 0
        int64_t var_a8
        sub_140b63b70(&arg_10, &var_a8)
        int64_t var_50 = var_a8
        int32_t var_a0
        int32_t var_48_1 = var_a0
        int32_t var_9c
        int32_t var_44_1 = var_9c
        char rax_8 = (*(rbx_1 + 0x330)).b & 6
        var_a8 = 0
        var_a0.q = 0
        
        if (rax_8 == 6)
            void* rax_9 = sub_141bb0d50(rbx_1)
            
            if (rax_9 != 0)
                int32_t rdx_3 = *(rbx_1 + 0x5c)
                void* rbx_2 = *(rax_9 + 0x1a8)
                int32_t r8_4 = *(rbx_1 + 0x58) - 1 + rdx_3
                arg_18 = &arg_10
                void* (* var_88)(int64_t* arg1, int64_t* arg2) = sub_141b971a0
                int32_t r8_5 = r8_4 & neg.d(rdx_3)
                arg_10.d = r8_5
                char** var_80_1 = &arg_18
                void* (** rax_10)(int64_t* arg1, int64_t* arg2) = *(rbx_2 + 0x28)
                
                if (rax_10 != 0)
                    void* (** arg_20)(int64_t* arg1, int64_t* arg2) = rax_10
                    sub_141b971a0(&arg_18, &arg_20)
                    void* rcx_5 = *(rbx_2 + 0x28)
                    arg_20 = &var_88
                    int64_t (* var_78)(int64_t* arg1, int64_t* arg2, void* arg3) = sub_141b97300
                    void* (*** var_70_1)(int64_t* arg1, int64_t* arg2) = &arg_20
                    sub_141ba8640(rcx_5, &var_78)
                    r8_5 = arg_10.d
                
                var_40_1 = r8_5
        
        int64_t i_2 = sx.q(i_1)
        i_1 = (i_2 + 1).d
        
        if (i_1 s> r14)
            sub_140ac0d60(&var_98)
            r14 = var_8c
            rsi = var_98
        
        int64_t* rbx_3 = rsi + i_2 * 0x18
        sub_140596d10(rbx_3, &var_50)
        int64_t rcx_9 = var_50
        rbx_3[2].d = var_40_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        r8_1 = var_68
        rdx_1 = var_60
        rcx_1 = var_58_1
    
    rax_1 = zx.q(rcx_1 + 1)
    var_58_1 = rax_1.d
    rcx_1 = rax_1.d
    
    if (rax_1.d s< rdx_1)
        while (*(r8_1 + (sx.q(rcx_1) << 3)) == 0)
            rax_1 = zx.q(rcx_1 + 1)
            var_58_1 = rax_1.d
            rcx_1 = rax_1.d
            
            if (rax_1.d s>= rdx_1)
                break

if (r8_1 != 0)
    sub_140a74f90(r8_1)

arg_10 = 0
arg_18 = &arg_10
int64_t result = sub_141b78340(rsi, i_1)
void* rbx_4 = rsi

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_12 = *rbx_4
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        rbx_4 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
