// 函数: sub_141fac5d0
// 地址: 0x141fac5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0xe0)
int64_t* rbx = nullptr
int32_t* rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_141fa4db0(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_14328f978
    *(rax_2 + 0xc) = 1
    rax_2[2] = rsi

*arg2 = rsi
arg2[1] = rax_2
void* rsi_1 = *(arg1 + 0x58)

if (arg3 != 0)
    void* rax_3 = sub_142452380()
    void* rdx_1 = *(arg3 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        rbx = arg3

uint8_t rax_6

if (rsi_1 != 0 && *(rsi_1 + 0xb0c) != 0 && rbx != 0)
    rax_6 = sub_141dce3a0(rbx)

if (rsi_1 == 0 || *(rsi_1 + 0xb0c) == 0 || rbx == 0 || rax_6 == 0)
    rsi_1.b = 0
else
    rsi_1.b = 1

sub_141fb87a0(*arg2, arg3, arg1, rsi_1.b ^ 1)

if (rsi_1.b != 0)
    int32_t* rcx_5 = *arg2
    
    if (*(rcx_5 + 0x20) != 0)
        int64_t* rsi_2 = *(arg3 + 0x10)
        
        if (rsi_2 != 0)
            int64_t r9_1 = rsi_2[0x23]
            
            if (r9_1 == 0)
                (*(*rsi_2 + 0x390))(rsi_2)
                r9_1 = rsi_2[0x23]
                rcx_5 = *arg2
            
            int32_t var_18_1 = 1
            sub_1422b1ad0(*(rcx_5 + 0x20), 0, arg3, r9_1.d)
            
            if (rbx != 0 && rbx[0x1e].b == 3)
                sub_141dd9f90(rbx)

int64_t* rsi_3 = *(arg1 + 0x58)

if (rsi_3 != 0 && rbx != 0 && sub_141dce3a0(rbx) != 0 && (*(rbx + 0x59) & 0x10) == 0)
    (*(*rsi_3 + 0x438))(rsi_3, rbx)

return arg2
