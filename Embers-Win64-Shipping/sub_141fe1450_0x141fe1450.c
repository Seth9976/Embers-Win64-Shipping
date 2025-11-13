// 函数: sub_141fe1450
// 地址: 0x141fe1450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
void* rcx = *arg1
int32_t arg_18 = 0

if (rcx != 0)
    arg_18 = sub_140b21160(rcx + 0x2c, 0x10, 0)

int64_t* r14 = arg1[1]
void* rbp = nullptr
int64_t rcx_2 = sx.q(arg1[2].d)
int32_t rsi = 0
void* var_48 = nullptr
int32_t r13 = 0
int32_t var_3c = 0
int64_t r15 = 0
uint64_t rbx_2 = rcx_2 << 3 u>> 3

if (r14 u> &r14[rcx_2])
    rbx_2 = 0

uint64_t arg_8 = rbx_2

if (rbx_2 != 0)
    uint64_t rax_2 = rbx_2
    
    do
        void* rbx_3 = *r14
        
        if (rbx_3 != 0)
            void* rax_3 = rbp
            void* r8_3 = (sx.q(rsi) << 4) + rbp
            
            if (rbp != r8_3)
                while (true)
                    int32_t rdx_4 = (*(rax_3 + 4) ^ *(rbx_3 + 0x30))
                        | (*(rax_3 + 8) ^ *(rbx_3 + 0x34)) | (*(rax_3 + 0xc) ^ *(rbx_3 + 0x38))
                        | (*rax_3 ^ *(rbx_3 + 0x2c))
                    
                    if (rdx_4 == 0)
                        break
                    
                    rax_3 += 0x10
                    
                    if (rax_3 == r8_3)
                        goto label_141fe1545
            
            if (rbp == r8_3 || ((rax_3 - rbp) s>> 4).d == 0xffffffff)
            label_141fe1545:
                int64_t rdi_2 = sx.q(rsi)
                rsi = (rdi_2 + 1).d
                
                if (rsi s> r13)
                    sub_1405a4f90(&var_48)
                    r13 = var_3c
                    rbp = var_48
                
                *(rbp + rdi_2 * 0x10) = *(rbx_3 + 0x2c)
            
            rax_2 = arg_8
        
        r14 = &r14[1]
        r15 += 1
    while (r15 != rax_2)

arg_8.b = 0
sub_141fd4760(rbp, rsi, arg2.b, &arg_8)
void* rbx_4 = rbp
void* rdi_5 = (sx.q(rsi) << 4) + rbp

if (rbp != rdi_5)
    do
        int32_t rax_8 = sub_140b21160(rbx_4, 0x10, r12)
        rbx_4 += 0x10
        r12 = rax_8
    while (rbx_4 != rdi_5)

sub_140a2e390(arg2, u"%08X%08X", zx.q(arg_18))

if (rbp != 0)
    sub_140a74f90(rbp)

return arg2
