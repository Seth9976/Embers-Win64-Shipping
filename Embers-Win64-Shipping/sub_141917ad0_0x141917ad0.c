// 函数: sub_141917ad0
// 地址: 0x141917ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
int32_t result
int32_t arg_18
int32_t arg_20

if (sub_14197ee80(&result_1) == 0)
    arg_18 = 0
    data_143effa50(0x821b, &arg_18)
    int32_t rax_1 = arg_18
    result = rax_1 - 3
    
    if (rax_1 != 3 && result == 1)
        arg_20 = 0
        data_143effa50(0x821c, &arg_20)
        result = 1
        
        if (arg_20 u> 2)
            result = 3
        
        goto label_141917b5d
else
    result = result_1
label_141917b5d:
    
    if (result s>= 3)
        void* rbx_1 = *(arg2 + 0x18)
        
        if (rbx_1 != 0)
            if (data_143f01c92 != 0)
                sub_140a80f40()
            
            arg_20 = 0
            void* rax_2 = rbx_1 + 0x70
            arg_18 = 0
            
            if (rbx_1 == 0)
                rax_2 = nullptr
            
            data_143f000f8(0x8d40, zx.q(sub_14193c970(arg1, 0, nullptr, &arg_20, &arg_18, rax_2)))
            int32_t r15_1 = *(rbx_1 + 0x60)
            int32_t r12_1 = *(rbx_1 + 0x64)
            void*** rax_4 = j_sub_140a82f30(0x58)
            int32_t* var_78_1
            void* var_70_1
            int32_t var_60
            void*** rbx_2
            
            if (rax_4 == 0)
                rbx_2 = nullptr
            else
                var_60 = 0
                var_70_1.b = 0
                var_78_1 = nullptr
                void*** rax_5 = sub_1419058e0(rax_4, 0, r12_1 * r15_1, 2, 0, 0, 0, 0)
                rbx_2 = rax_5
                
                if (rax_5 != 0)
                    rax_5[1].d += 1
            
            data_143effcd8(0x88eb, 0)
            data_143effcd8(0x88eb, zx.q(rbx_2[3].d))
            data_143effac0(0xd05, 1)
            var_70_1.d = 0x1401
            var_78_1.d = 0x1901
            data_143effae8(0, 0, zx.q(r15_1), zx.q(r12_1), 0x1901, 0x1401, 0, var_60)
            data_143effac0(0xd05, 4)
            data_143effcd8(0x88eb, 0)
            uint64_t rdx_4
            
            if (*(arg1 + 0x15b50) != 1)
                int32_t rcx_4 = 0x14a20
                
                if (sub_141957ff0(*(arg1 + 0x15bb8)) == 1)
                    rcx_4 = 0x152b8
                
                rdx_4 = zx.q(rcx_4)
            else
                rdx_4 = 0x152b8
            
            void* rdi_1 = rdx_4 + arg1
            int32_t r14_1 = *(arg2 + 0x14)
            int32_t r8_5 = data_1439c7498 - 1
            int32_t rdx_5 = *(arg2 + 0x10)
            int64_t rcx_5 = sx.q(r8_5) * 5
            int64_t rax_8 = *(rdi_1 + 8)
            
            if (*(rax_8 + (rcx_5 << 3) + 0x10) != r14_1 || *(rax_8 + (rcx_5 << 3) + 0x14) != rdx_5)
                int32_t var_68_1 = 1
                var_70_1.d = 0xffffffff
                var_78_1.d = rdx_5
                sub_14190a090(arg1, rdi_1, r8_5, r14_1, var_78_1.d, 0xffffffff)
            
            int32_t rsi_1 = rbx_2[3].d
            
            if (*(rdi_1 + 0x428) != rsi_1)
                data_143effcd8(0x88ec, zx.q(rsi_1))
                *(rdi_1 + 0x428) = rsi_1
            
            data_143effac0(0xcf2, zx.q(r15_1))
            data_143effac0(0xcf5, 1)
            var_70_1.d = r12_1
            var_78_1.d = r15_1
            data_143effb68(zx.q(r14_1), 0, 0, 0, var_78_1, var_70_1, 0x8d94, 0x1401, 0)
            data_143effac0(0xcf5, 4)
            data_143effac0(0xcf2, 0)
            
            if (*(rdi_1 + 0x428) != 0)
                data_143effcd8(0x88ec, 0)
                *(rdi_1 + 0x428) = 0
            
            result = data_143f000f8(0x8d40, zx.q(*(rdi_1 + 0x188)))
            *(rdi_1 + 0x188) = 0xffffffff
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                return (**rbx_2)(rbx_2, 1)
return result
