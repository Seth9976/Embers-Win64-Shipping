// 函数: sub_1423dfba0
// 地址: 0x1423dfba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* r10_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* rdx

if (rax == r10_1)
label_1423dfc13:
    rdx = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        rdx = *rax
        
        if (*(rdx + 0x278) == arg4)
            break
        
        rax = &rax[1]
        
        if (rax == r10_1)
            goto label_1423dfc13

int64_t var_98
sub_1423fb9e0(&var_98, &rdx[0xd0], arg2, 1)
int16_t* var_70
int32_t result
int32_t var_74

if (sub_142415f00(&var_98) == 0)
    sub_140b1f640(arg3, u"ERROR: Can only perform streaming load for local URLs.")
else
    int32_t var_68
    
    if (sub_1423e9570(arg1, &var_70) == 0 || var_74 == 0)
        int16_t* r8_4 = &data_142d40450
        
        if (var_68 != 0)
            r8_4 = var_70
        
        sub_140b1f700(arg3, u"ERROR: The map '%s' does not exist.", r8_4)
    else
        int64_t* rax_4 = sub_141baa510(arg4)
        int16_t* const rdi_1 = &data_142d40450
        int64_t* rbx_1 = *rax_4
        void* r14_1 = &rbx_1[sx.q(rax_4[1].d)]
        
        if (rbx_1 == r14_1)
        label_1423dfcc6:
            int64_t var_a0_1 = 1
            int64_t* var_a8 = nullptr
            
            if (var_68 != 0)
                rdi_1 = var_70
            
            int64_t arg_8
            sub_140b58260(&arg_8, rdi_1, 1)
            sub_1405a4d70(&var_a8)
            int64_t* rdi_2 = var_a8
            *rdi_2 = arg_8
            int64_t* rax_9 = *(arg1 + 0xc38)
            void* rcx_9 = &rax_9[sx.q(*(arg1 + 0xc40))]
            char* rbx_2
            
            if (rax_9 == rcx_9)
            label_1423dfd43:
                rbx_2 = sub_1423d6f90(data_143f5b298, 0)
            else
                while (true)
                    rbx_2 = *rax_9
                    
                    if (*(rbx_2 + 0x278) == arg4)
                        break
                    
                    rax_9 = &rax_9[1]
                    
                    if (rax_9 == rcx_9)
                        goto label_1423dfd43
            
            sub_1423eb0a0(arg1, rbx_2, &var_a8)
            *(rbx_2 + 0x1e8) |= 1
            result = *(rbx_2 + 0x1c0)
            
            if (result s> 0)
                if (result != *(rbx_2 + 0x1d0))
                    sub_140bc7700(0xffffffff)
                
                void** rax_11 = *(arg1 + 0xc38)
                void* rcx_13 = &rax_11[sx.q(*(arg1 + 0xc40))]
                char* rdx_7
                
                if (rax_11 == rcx_13)
                label_1423dfdc3:
                    rdx_7 = sub_1423d6f90(data_143f5b298, 0)
                else
                    while (true)
                        rdx_7 = *rax_11
                        
                        if (*(rdx_7 + 0x278) == *(rbx_2 + 0x278))
                            break
                        
                        rax_11 = &rax_11[1]
                        
                        if (rax_11 == rcx_13)
                            goto label_1423dfdc3
                
                sub_1423d4680(arg1, rdx_7)
                *(rbx_2 + 0x1e8) &= 0xfffffffe
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
        else
            while (true)
                int16_t* const rdx_3 = &data_142d40450
                void* rax_6 = *rbx_1
                
                if (var_68 != 0)
                    rdx_3 = var_70
                
                int16_t* const rcx_5
                
                if (*(rax_6 + 0x60) == 0)
                    rcx_5 = &data_142d40450
                else
                    rcx_5 = *(rax_6 + 0x58)
                
                if (sub_140a54510(rcx_5, rdx_3) == 0)
                    if (var_68 != 0)
                        rdi_1 = var_70
                    
                    sub_140b1f700(arg3, u"ERROR: The map '%s' is already loaded.", rdi_1)
                    break
                
                rbx_1 = &rbx_1[1]
                
                if (rbx_1 == r14_1)
                    goto label_1423dfcc6
int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_50
int64_t* rbx_3 = var_50

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_21 = *rbx_3
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = var_50

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

int16_t* rcx_24 = var_70

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_26 = var_98

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

result.b = 1
return result
