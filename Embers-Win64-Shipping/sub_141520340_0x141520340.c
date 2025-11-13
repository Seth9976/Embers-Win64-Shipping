// 函数: sub_141520340
// 地址: 0x141520340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141520bd0()
void* const rdi = rax[0x23]

if (rdi == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    rdi = rax[0x23]

void* rax_1
int64_t rax_2
void* rdx

if (rdi != 0)
    rax_1 = sub_141520bd0()
    rdx = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

int64_t* rbx_1 = *(rdi + 0xe0)
void* rdi_1 = &rbx_1[sx.q(*(rdi + 0xe8)) * 5]

if (rbx_1 == rdi_1)
label_14152043a:
    int64_t* rax_6 = sub_140af5690(data_143ddb400, /Script/Engine.GameMode", 0, 1, &data_143de5830)
    
    if (rax_6 == 0)
        sub_140596d10(arg1, arg2)
    else
        int16_t* var_38 = nullptr
        int32_t var_30_1 = 0
        void arg_18
        sub_140ae6000(rax_6, *sub_140b58260(&arg_18, u"GameModeClassAliases", 1), &var_38, 0)
        int64_t rdi_2 = sx.q(var_30_1)
        int64_t* r15_1 = var_38
        int64_t* rbx_3
        void* r14_3
        
        if (rdi_2.d != 0)
            rbx_3 = r15_1
            r14_3 = &r15_1[rdi_2 * 2]
        
        if (rdi_2.d == 0 || r15_1 == r14_3)
        label_14152057b:
            int64_t* rbx_4 = r15_1
            
            if (rdi_2.d != 0)
                int32_t i
                
                do
                    int64_t rcx_13 = *rbx_4
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    rbx_4 = &rbx_4[2]
                    i = rdi_2.d
                    rdi_2 = zx.q(rdi_2.d - 1)
                while (i != 1)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            sub_140596d10(arg1, arg2)
        else
            while (true)
                int64_t var_48 = 0
                int64_t var_40
                __builtin_memset(&var_40, 0, 0x14)
                int16_t* rcx_7
                
                if (rbx_3[1].d == 0)
                    rcx_7 = &data_142d40450
                else
                    rcx_7 = *rbx_3
                
                if (sub_140b2acc0(rcx_7, u"ShortName=", &var_38, 1) != 0)
                    int16_t* rcx_9
                    
                    if (rbx_3[1].d == 0)
                        rcx_9 = &data_142d40450
                    else
                        rcx_9 = *rbx_3
                    
                    if (sub_140b2acc0(rcx_9, u"GameClassName=", &var_48, 1) != 0)
                        int16_t* rdx_4
                        
                        if (arg2[1].d == 0)
                            rdx_4 = &data_142d40450
                        else
                            rdx_4 = *arg2
                        
                        int16_t* const rcx_10 = &data_142d40450
                        int32_t var_30_2
                        
                        if (var_30_2 != 0)
                            rcx_10 = var_38
                        
                        if (sub_140a54510(rcx_10, rdx_4) == 0)
                            int16_t* rcx_16 = var_38
                            *arg1 = var_48
                            arg1[1].d = var_40.d
                            *(arg1 + 0xc) = var_40:4.d
                            int64_t var_40_1 = 0
                            var_48 = 0
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            int64_t* rbx_5 = r15_1
                            int32_t i_1
                            
                            do
                                int64_t rcx_17 = *rbx_5
                                
                                if (rcx_17 != 0)
                                    sub_140a74f90(rcx_17)
                                
                                rbx_5 = &rbx_5[2]
                                i_1 = rdi_2.d
                                rdi_2 = zx.q(rdi_2.d - 1)
                            while (i_1 != 1)
                            
                            if (r15_1 != 0)
                                sub_140a74f90(r15_1)
                            
                            break
                
                int64_t rcx_11 = var_48
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int16_t* rcx_12 = var_38
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                rbx_3 = &rbx_3[2]
                
                if (rbx_3 == r14_3)
                    goto label_14152057b
else
    while (true)
        int16_t* rdx_1
        
        if (rbx_1[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *rbx_1
        
        int16_t* const rcx_3
        
        if (arg2[1].d == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *arg2
        
        if (sub_140a54510(rcx_3, rdx_1) == 0)
            sub_140d30800(&rbx_1[2], arg1)
            break
        
        rbx_1 = &rbx_1[5]
        
        if (rbx_1 == rdi_1)
            goto label_14152043a

return arg1
