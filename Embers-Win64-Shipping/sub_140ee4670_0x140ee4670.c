// 函数: sub_140ee4670
// 地址: 0x140ee4670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&arg1[0x96])
DeleteCriticalSection(&arg1[0x91])
int64_t* rdi = arg1[0x90]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (*(arg1 + 0x471) != 0)
    *(arg1 + 0x471) = 0

int64_t* rsi = arg1[0x8c]

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t rax_5 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rsi + 8))(rsi, 1)

sub_140745b20(&arg1[0x89])
int64_t* rsi_1 = arg1[0x87]

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rax_9 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = arg1[0x84]

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t rax_13 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* rsi_3 = arg1[0x81]

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t rdi_1 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rsi_3 + 8))(rsi_3, zx.q(rdi_1))

sub_140745b20(&arg1[0x7d])
sub_140745b20(&arg1[0x79])
sub_140745b20(&arg1[0x75])
return sub_1406922a0(arg1) __tailcall
