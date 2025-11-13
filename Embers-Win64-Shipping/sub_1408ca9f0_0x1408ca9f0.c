// 函数: sub_1408ca9f0
// 地址: 0x1408ca9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
*(arg1 + 0x20) = 1
*(arg1 + 8) = data_14399e5dc
int32_t r15 = 0
int32_t i_1
int64_t var_80

if (arg2 != 0)
    i_1 = 0
    
    if (arg2[5].d s> 0)
        int64_t rdx = 0
        var_80 = 0
        int32_t i
        
        do
            int64_t* rax_1 = arg2[4]
            int64_t* rcx = arg2
            char arg_8 = 0
            char (* var_70)(int64_t, char* arg2) = sub_1405991d0
            
            if (rax_1 != 0)
                rcx = rax_1
            
            int32_t arg_10 = 0
            void* var_58_1 = arg1
            char* var_68_1 = &arg_8
            char (** var_60)(int64_t, char* arg2) = &var_70
            void* rbp_1 = *(rcx + rdx)
            int32_t* var_50_1 = &arg_10
            uint64_t rcx_4
            
            while (true)
                int64_t rax_2 = 0
                
                if (0 == *(rbp_1 + 8))
                    *(rbp_1 + 8) = 0
                else
                    rax_2 = *(rbp_1 + 8)
                
                uint64_t rsi_2 = rax_2 u>> 0x1a
                int32_t rax_3 = sub_140597f20(&var_60, zx.q(rsi_2.d) & 1)
                uint64_t r14_1 = zx.q(rax_3)
                
                if (rax_3 == 0)
                    rcx_4 = zx.q(arg_10)
                    
                    if (rcx_4.d != 0)
                        sub_140a24050(rcx_4.d)
                    
                    rcx_4.b = 0
                    break
                
                if (((rax_2 & 0xfffffffffc000000) + 0x8000000) u>> 0x1a u< rsi_2)
                    sub_140a2c900()
                
                *(*(&data_143cf0bf8 + (r14_1 u>> 0xe << 3)) + (zx.q(r14_1.d) & 0x3fff) * 0x18
                    + 0x10) = rax_2.d & 0x3ffffff
                bool z_1
                
                if (rax_2 == *(rbp_1 + 8))
                    *(rbp_1 + 8) = r14_1 | ((rax_2 & 0xfffffffffc000000) + 0x8000000)
                    z_1 = true
                else
                    *(rbp_1 + 8)
                    z_1 = false
                
                if (z_1)
                    rcx_4.b = 1
                    break
            
            int32_t rax_11 = r15 + 1
            
            if (rcx_4.b != 0)
                rax_11 = r15
            
            i = i_1 + 1
            rdx = var_80 + 8
            i_1 = i
            r15 = rax_11
            var_80 = rdx
        while (i s< arg2[5].d)
        rbx = arg3

int32_t rcx_6 = zx.d(arg4) + r15
int32_t result = *(arg1 + 0xc)
*(arg1 + 0xc) += neg.d(rcx_6)

if (result != rcx_6)
    return result

int64_t* rax_14 = sub_140a242a0()
return (**rax_14)(rax_14, arg1, zx.q(*(arg1 + 8)), zx.q(rbx), i_1, var_80)
