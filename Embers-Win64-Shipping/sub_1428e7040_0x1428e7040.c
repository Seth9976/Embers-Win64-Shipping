// 函数: sub_1428e7040
// 地址: 0x1428e7040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = arg3

if (arg1 == 0)
    return 0

int32_t* rdi = *arg1
int32_t rax_1 = sub_142898c70(rdi)

if (rbx s> rax_1)
    rbx = rax_1
else if (rbx s< 0)
    rbx = rax_1

int32_t rsi = 0
arg1[1].d = 1
int32_t r15
r15.b = arg4 == 0

if (arg4 != 0xffffffff)
    if (rbx s< rax_1)
        rsi = *(sub_142898ea0(rdi, rbx) + 0x10)
    else if (rbx != 0)
        rsi = *(sub_142898ea0(rdi, rbx - 1) + 0x10) + 1
else if (rbx != 0)
    rsi = *(sub_142898ea0(rdi, rbx - 1) + 0x10)
else
    r15 = 1

void* rax_4 = sub_1428abeb0(arg2)

if (rax_4 != 0)
    *(rax_4 + 0x10) = rsi
    int32_t rax_5 = sub_142898a60(rdi, rax_4, rbx)
    
    if (rax_5 != 0)
        if (r15 != 0)
            int32_t rax_7 = sub_142898c70(rdi)
            int32_t rbx_1 = rbx + 1
            
            while (rbx_1 s< rax_7)
                void* rax_8 = sub_142898ea0(rdi, rbx_1)
                rbx_1 += 1
                *(rax_8 + 0x10) += 1
        
        return 1
    
    sub_1428a5670(rax_5 + 0xb, rax_5 + 0x71, rax_5 + 0x41, "crypto\x509\x509name.c", 0xe3)

sub_1428abed0(rax_4)
return 0
