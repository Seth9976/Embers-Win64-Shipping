// 函数: sub_1418870b0
// 地址: 0x1418870b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(arg2)
int64_t* rcx_1 = *arg3
int64_t rdi = 0
int64_t* var_38 = nullptr
int32_t var_30 = 0
(*(*rcx_1 + 0x1a0))(rcx_1, &var_38)
int64_t* rsi = var_38
int64_t rbx = sx.q(var_30)
void* r12_2 = &rsi[rbx * 2]

if (rsi != r12_2)
    do
        int64_t* rcx_2 = *arg3
        void* rax_2 = (*(*rcx_2 + 0x1c8))(rcx_2, rsi)
        void* rbx_1 = *(rax_2 + 0x48)
        void* rbp_1 = rbx_1 + sx.q(*(rax_2 + 0x50)) * 0x18
        
        while (rbx_1 != rbp_1)
            void arg_10
            
            if (*sub_140b162a0(arg4, &arg_10, rbx_1) != 0xffffffff)
                sub_1418286b0(arg2, rdi, zx.q(*(rbx_1 + 0x14)), 1)
            
            uint64_t rax_5 = zx.q(*(rbx_1 + 0x14))
            rbx_1 += 0x18
            rdi += rax_5
        
        rsi = &rsi[2]
    while (rsi != r12_2)
    
    rbx = zx.q(var_30)
    rsi = var_38

if (rbx.d != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rsi
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rsi = &rsi[2]
        i = rbx.d
        rbx = zx.q(rbx.d - 1)
    while (i != 1)
    rsi = var_38

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
