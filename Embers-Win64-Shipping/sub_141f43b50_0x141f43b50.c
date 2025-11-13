// 函数: sub_141f43b50
// 地址: 0x141f43b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x13c] != 0)
    sub_1405a6220(sub_140a242a0(), &arg1[0x13c])
    (*(*arg1 + 0x9d0))(arg1, 0)

if (arg1[0x11b] != 0)
    sub_1405a6220(sub_140a242a0(), &arg1[0x11b])
    int64_t* rcx_3 = arg1[0x11b]
    
    if (rcx_3 != 0)
        arg1[0x11b] = 0
        rcx_3[9].d -= 1
        
        if (rcx_3[9].d == 1)
            sub_140a2f6e0(rcx_3)
        
        if (arg1[0x116] != 0)
            int64_t rsi_1 = 0
            char rax_5 = sub_140d3e110(&arg1[0x87])
            
            if (rax_5 != 0)
                rsi_1 = sub_140d3c6e0(&arg1[0x87])
            
            if (rax_5 == 0 || arg1[0x97].d != 0)
                int64_t* rcx_7 = arg1[0x116]
                (*(*rcx_7 + 0x58))(rcx_7, &arg1[0x11c], arg1, rsi_1)
            else
                sub_141f460c0(&arg1[0x11c])

sub_14231ac00(arg1)
int64_t* rcx_9 = arg1[0xca]

if (rcx_9 != 0)
    sub_141e0ebf0(rcx_9)

int64_t rsi_2 = 0
int64_t* rdi = arg1[0xd8]
uint64_t r14_1 = sx.q(arg1[0xd9].d) << 3 u>> 3

if (rdi u> &rdi[arg1[0xd9]])
    r14_1 = 0

if (r14_1 != 0)
    do
        sub_141e0ebf0(*rdi)
        rsi_2 += 1
        rdi = &rdi[1]
    while (rsi_2 != r14_1)

sub_141f46370(arg1)
int64_t* rcx_12 = arg1[0xcb]

if (rcx_12 != 0)
    sub_141e0ebf0(rcx_12)

int64_t* rsi_3

if (arg1[0xf0] == 0)
    rsi_3 = nullptr
else
    void* rax_10 = sub_141d43b90()
    
    if (rax_10 == 0)
        rsi_3 = nullptr
    else
        int64_t* rdi_1 = arg1[0xf0]
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s> rdi_1[7].d || *(rdi_1[6] + (rax_11 << 3)) != rax_10 + 0x30 || rdi_1 == 0)
            rsi_3 = nullptr
        else
            rsi_3 = rdi_1[0x23]
            
            if (rsi_3 == 0)
                (*(*rdi_1 + 0x390))(rdi_1)
                rsi_3 = rdi_1[0x23]

int64_t* rcx_15 = arg1[0x116]

if (rcx_15 != 0 && rsi_3 != 0)
    (*(*rcx_15 + 0x50))(rcx_15, arg1[0x117])
    int64_t* rcx_16 = arg1[0x116]
    (*(*rcx_16 + 0x48))(rcx_16)
    int64_t* rcx_17 = arg1[0x116]
    (*(*rcx_17 + 0x30))(rcx_17)
    (*(*rsi_3 + 0x268))(rsi_3, arg1[0x116])
    arg1[0x116] = 0
    arg1[0x117] = 0

if ((*(arg1 + 0x719) & 0x20) != 0)
    void* rax_18 = arg1[0x15]
    void* const rcx_20
    
    if (rax_18 != 0)
        rcx_20 = *(rax_18 + 0x1f8)
    else
        rax_18 = sub_141ee69e0(arg1)
        
        if (rax_18 == 0)
            rcx_20 = nullptr
        else
            rcx_20 = *(rax_18 + 0x1f8)
    
    if (rcx_20 != 0)
        sub_142262a00(rcx_20, arg1)

arg1[0xfd].d = 0

if (*(arg1 + 0x7ec) s<= 0xffffffff)
    sub_1405947f0(&arg1[0xfc], 0)

return sub_141f6cbe0(arg1) __tailcall
