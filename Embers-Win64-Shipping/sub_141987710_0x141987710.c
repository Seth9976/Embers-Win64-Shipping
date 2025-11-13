// 函数: sub_141987710
// 地址: 0x141987710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t rbx = arg3
*(arg1 + 0x18) = 1
int32_t rax

if (data_143f01c93 == 0)
    int32_t rcx = data_143f0efd8
    int32_t rax_1
    
    if (rcx != 0x400)
        if (rcx != 0x800 || data_14399e5c8 != 0)
            rax_1 = data_143f0efdc | rcx
        else
            rax_1 = data_143f0efe0
    else if (data_143cf0848 == 0)
        if (data_14399e5cc != 0)
            rax_1 = data_143f0efdc | rcx
        else
            rax_1 = data_143f0efe0
    else if (data_143f0efe4 == 1 || data_14399e5cc == 0)
        rax_1 = data_143f0efe0
    else
        rax_1 = data_143f0efdc | rcx
    
    rax = rax_1 | 0xff
else
    rax = 0

*(arg1 + 8) = rax
int32_t r15 = 0

if (arg2 != 0)
    int32_t i = 0
    
    if (arg2[5].d s> 0)
        int64_t r8 = 0
        int64_t var_88_1 = 0
        
        do
            int64_t* rax_3 = arg2[4]
            int64_t* rcx_1 = arg2
            char arg_8 = 0
            char (* var_78)(int64_t, char* arg2) = sub_1405991d0
            
            if (rax_3 != 0)
                rcx_1 = rax_3
            
            int32_t var_98 = 0
            void* var_60_1 = arg1
            char* var_70_1 = &arg_8
            char (** var_68)(int64_t, char* arg2) = &var_78
            void* r14_1 = *(rcx_1 + r8)
            int32_t* var_58_1 = &var_98
            int64_t rax_4 = 0
            
            if (0 == *(r14_1 + 8))
                *(r14_1 + 8) = 0
            else
                rax_4 = *(r14_1 + 8)
            
            int64_t rbx_1 = rax_4
            uint64_t rsi_2 = rax_4 u>> 0x1a
            uint64_t var_90 = zx.q(rsi_2.d) & 1
            int32_t rax_7 = sub_1405991f0(&var_68, &var_90)
            int32_t rbp_1 = rax_7
            uint64_t rcx_5
            
            if (rax_7 == 0)
            label_141987918:
                rcx_5 = zx.q(var_98)
                
                if (rcx_5.d != 0)
                    sub_140a24050(rcx_5.d)
                
                rcx_5.b = 0
            else
                while (true)
                    if (((rbx_1 & 0xfffffffffc000000) + 0x8000000) u>> 0x1a u< rsi_2)
                        sub_140a2c900()
                    
                    uint64_t r8_1
                    
                    if (rbp_1 != 0)
                        r8_1 = zx.q(rbp_1)
                        rcx_5 = *(&data_143cf0bf8 + (zx.q(rbp_1) u>> 0xe << 3))
                            + (zx.q(rbp_1) & 0x3fff) * 0x18
                    else
                        rcx_5 = nullptr
                        r8_1 = 0
                    
                    *(rcx_5 + 0x10) = rbx_1.d & 0x3ffffff
                    bool z_1
                    
                    if (rbx_1 == *(r14_1 + 8))
                        *(r14_1 + 8) = ((rbx_1 & 0xfffffffffc000000) + 0x8000000) | r8_1
                        z_1 = true
                    else
                        *(r14_1 + 8)
                        z_1 = false
                    
                    if (z_1)
                        rcx_5.b = 1
                        break
                    
                    int64_t rax_15 = 0
                    
                    if (0 == *(r14_1 + 8))
                        *(r14_1 + 8) = 0
                    else
                        rax_15 = *(r14_1 + 8)
                    
                    rbx_1 = rax_15
                    rsi_2 = rax_15 u>> 0x1a
                    var_90 = zx.q(rsi_2.d) & 1
                    int32_t rax_18 = sub_1405991f0(&var_68, &var_90)
                    rbp_1 = rax_18
                    
                    if (rax_18 == 0)
                        goto label_141987918
            
            int32_t rax_19 = r15 + 1
            arg2 = arg_10
            
            if (rcx_5.b != 0)
                rax_19 = r15
            
            r8 = var_88_1 + 8
            i += 1
            var_88_1 = r8
            r15 = rax_19
        while (i s< arg2[5].d)
        
        rbx = arg3

int32_t rcx_9 = zx.d(arg4) + r15
int32_t result = *(arg1 + 0xc)
*(arg1 + 0xc) += neg.d(rcx_9)

if (result != rcx_9)
    return result

int64_t* rax_22 = sub_140a242a0()
return (**rax_22)(rax_22, arg1, zx.q(*(arg1 + 8)), zx.q(rbx))
