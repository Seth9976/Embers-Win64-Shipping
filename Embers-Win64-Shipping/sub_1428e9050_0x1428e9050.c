// 函数: sub_1428e9050
// 地址: 0x1428e9050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
char* rsi = arg1[2]
int64_t* arg_8 = nullptr
int32_t rax
int32_t r8_1

if (rsi != 0)
    int64_t* rax_1 = sub_142890500()
    arg_8 = rax_1
    
    if (rax_1 != 0)
        char rax_2 = *rsi
        char rcx
        int32_t rdi_1
        
        if (rax_2 != 0x2d)
            rdi_1 = 0
            rcx = rax_2
        else
            rcx = rsi[1]
            rdi_1 = 1
        
        char* rbx_1 = &rsi[1]
        
        if (rax_2 != 0x2d)
            rbx_1 = rsi
        
        int32_t rax_4
        
        if (rcx != 0x30 || ((rbx_1[1] - 0x58) & 0xdf) != 0)
            rax_4 = sub_1428f5fa0(&arg_8, rbx_1)
        else
            rbx_1 = &rbx_1[2]
            rax_4 = sub_1428f6170(&arg_8, rbx_1)
        
        if (rax_4 == 0 || *(sx.q(rax_4) + rbx_1) != 0)
            sub_1428901a0(arg_8)
            rax = 0xcb
            r8_1 = 0x64
        else
            if (rdi_1 != 0 && sub_142890300(arg_8) != 0)
                rdi_1 = 0
            
            void* rax_7 = sub_1428e49c0(arg_8, nullptr)
            sub_1428901a0(arg_8)
            
            if (rax_7 != 0)
                if (rdi_1 != 0)
                    *(rax_7 + 4) |= 0x100
                
                *arg2 = rax_7
                return 1
            
            rax = 0xd6
            r8_1 = (rax_7 + 0x65).d
    else
        rax = 0xb5
        r8_1 = 0x41
else
    rax = 0xb0
    r8_1 = (&rsi[0x6d]).d

sub_1428a5670(0x22, 0x6c, r8_1, "crypto\x509v3\v3_utl.c", rax)
*arg1
int64_t var_28_1 = arg1[2]
char const* const var_30_1 = ",value:"
int32_t var_38_1
var_38_1.q = arg1[1]
sub_1428a4880(6)
return 0
