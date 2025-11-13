// 函数: sub_142640930
// 地址: 0x142640930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_143451460
arg1[0x44] = &data_143451bd0
sub_141dde490(&arg1[0x46], 0x420c0000, 0x43100000)
arg1[0x55].d &= 0xfffffffc
void* rcx_1 = &arg1[0x6b]
arg1[0x55].d |= 0x1c
*(arg1 + 0x2ac) = 3
arg1[0x57] = 0
arg1[0x58] = 0
*(arg1 + 0x2b4) = 0xd
__builtin_memset(&arg1[0x5c], 0, 0x50)
__builtin_memset(&arg1[0x67], 0, 0x20)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x77]
arg1[0x6f].d = 0xffffffff
*(arg1 + 0x37c) = 0
arg1[0x71] = 0
arg1[0x72].d = 0
__builtin_memset(&arg1[0x73], 0, 0x20)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x7b].d = 0xffffffff
*(arg1 + 0x3dc) = 0
arg1[0x7d] = 0
arg1[0x7e].d = 0
arg1[0x7f].d &= 0xfffffffa
int16_t rax_2 = (data_143f715d0).w
data_143f715d0 += 1
*(arg1 + 0x32) |= 2
*(arg1 + 0x59) &= 0xfe
*(arg1 + 0x3fc) = rax_2 + 1
sub_141dd7d00(arg1, 0)
int64_t* rax_4 = j_sub_140a82f30(0x28)
int64_t* rdi = rax_4

if (rax_4 == 0)
    rdi = nullptr
else
    __builtin_memset(rax_4, 0, 0x20)
    rax_4[4].d = 0x800

void*** rax_5 = j_sub_140a82f30(0x18)
void*** rbx = rax_5

if (rax_5 == 0)
    rbx = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx = &data_143240d28
    rbx[2] = rdi

int64_t* var_38 = rdi
void*** var_30 = rbx

if (rdi != 0)
    if (*rdi == 0)
    label_142640b84:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rdi
        int64_t* rcx_5 = rdi[1]
        
        if (rbx != rcx_5)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_5 = rdi[1]
            
            if (rcx_5 != 0)
                int32_t rax_7 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_11 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*rbx)[1](rbx, 1)
    else
        void* rcx_4 = rdi[1]
        
        if (rcx_4 == 0)
            goto label_142640b84
        
        int32_t rax_6 = 0
        
        if (0 == *(rcx_4 + 8))
            *(rcx_4 + 8) = 0
        else
            rax_6 = *(rcx_4 + 8)
        
        if (rax_6 s<= 0)
            goto label_142640b84

if (&arg1[0x67] != &var_38)
    arg1[0x67] = rdi
    var_38 = nullptr
    sub_1405aeff0(&arg1[0x68], &var_30)

void*** rcx_9 = var_30

if (rcx_9 != 0)
    rcx_9[1].d -= 1
    
    if (rcx_9[1].d == 1)
        void*** rbx_1 = var_30
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            void*** rcx_11 = var_30
            (*rcx_11)[1](rcx_11, zx.q(rsi_1))

arg1[0x56].d = 0x3f000000
void arg_8
uint64_t rbx_2 = *sub_140b58260(&arg_8, u"SceneComp", 1)
int64_t* rax_17 = sub_1425881f0()
void* rax_18 = sub_140cd9110(arg1, rbx_2, rax_17, rax_17, 1, 0)
arg1[0x26] = rax_18
*(rax_18 + 0x14f) = 0
return arg1
