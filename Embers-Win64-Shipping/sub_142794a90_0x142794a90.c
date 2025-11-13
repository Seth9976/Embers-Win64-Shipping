// 函数: sub_142794a90
// 地址: 0x142794a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9840(arg1)
void* rsi = *(arg1 + 0xf8)
uint64_t rax
void* const rbp
int64_t* rsi_1
void* const r12_2

if (rsi == 0)
    int64_t* rcx_3 = *(arg1 + 0xa0)
    (*(*rcx_3 + 0x150))(rcx_3)
    int128_t var_38_1 = zx.o(0)
    rsi_1 = nullptr
    rbp = nullptr
    r12_2 = nullptr
else
    rbp = *(rsi + 0x288)
    rsi_1 = *(rsi + 0x290)
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    if (rbp == 0)
        r12_2 = nullptr
    else
        rax = sub_142232f80(rbp)
        
        if (rax == 0)
            r12_2 = nullptr
        else
            int64_t rax_1 = sub_142776620()
            void* rcx_1 = *(rax + 0x10)
            int64_t rdx_1 = sx.q(*(rax_1 + 0x38))
            
            if (rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_1 + 0x30)
                r12_2 = nullptr
            else
                r12_2 = *(rax + 0x2a0)

if (rbp != 0)
    int64_t* i = *(arg1 + 0x110)
    
    for (void* r13_1 = &i[sx.q(*(arg1 + 0x118))]; i != r13_1; i = &i[1])
        int64_t rdi_1 = *i
        
        if (rdi_1 != 0 && r12_2 != 0)
            int32_t arg_8
            sub_140865c40(rbp + 0xa8, &arg_8, rdi_1)
            rax = sx.q(arg_8)
            
            if (rax.d != 0xffffffff)
                void* rdi_2 = *(rbp + 0xa8) + rax * 0x18
                
                if (rdi_2 != 0 && rdi_2 != -8)
                    void* rdi_4 = *(rdi_2 + 8)
                    
                    if (rdi_4 != 0)
                        void* rax_3 = sub_142577430()
                        void* rdx_4 = *(rdi_4 + 0x10)
                        rax = sx.q(*(rax_3 + 0x38))
                        
                        if (rax.d s<= *(rdx_4 + 0x38)
                                && *(*(rdx_4 + 0x30) + (rax << 3)) == rax_3 + 0x30)
                            sub_1427764a0(r12_2, rdi_4, arg1)
                            sub_1427764a0(r12_2, rdi_4, rdi_4)

bool cond:0 = *(arg1 + 0x11c) == 0
*(arg1 + 0x118) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x110, 0)

bool cond:1 = *(arg1 + 0x12c) == 0
*(arg1 + 0x128) = 0

if (not(cond:1))
    sub_1405c5570(arg1 + 0x120, 0)

if (rsi_1 == 0)
    return 

rsi_1[1].d -= 1

if (rsi_1[1].d != 1)
    return 

(**rsi_1)(rsi_1)
int32_t temp1_1 = *(rsi_1 + 0xc)
*(rsi_1 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rsi_1 + 8))
