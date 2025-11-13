// 函数: sub_1420526b0
// 地址: 0x1420526b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = arg1[0xbc].b | 2
arg1[0xbc].b = (((rdx << 2 | rdx) ^ rdx) & 4) ^ rdx
int64_t* rax_1 = j_sub_140a82f30(0x10)
int64_t* r14 = rax_1

if (rax_1 == 0)
    r14 = nullptr
else
    *rax_1 = 0
    rax_1[1] = 0

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rsi = &data_142ee2130
    rsi[2] = r14

int64_t* var_28 = r14
void*** var_20 = rsi

if (&arg1[0xa8] != &var_28)
    arg1[0xa8] = r14
    var_28 = nullptr
    sub_1405aeff0(&arg1[0xa9], &var_20)
    rsi = var_20

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t rbp_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*rsi)[1](rsi, zx.q(rbp_1))

arg1[0xac] = 0
*(arg1 + 0x5dc) = 0
arg1[0xab].d = 0

if (*(arg1 + 0x55c) != 0)
    sub_1405dadb0(&arg1[0xaa], 0)

arg1[0xb2] = data_143dbb1f8.q
int32_t rax_6 = data_143dbb200
arg1[0xb3].d = rax_6
*(arg1 + 0x584) = arg1[0xb2]
*(arg1 + 0x58c) = rax_6
*(arg1 + 0x59c) = 0
arg1[0xb5].d = 0

if (*(arg1 + 0x5ac) != 0)
    sub_1413f6f70(&arg1[0xb4], 0)

sub_14209fb70(&arg1[0x9f])
void* rax_7 = arg1[0x9d]

if (rax_7 != 0)
    int32_t rcx_6 = *(*(rax_7 + 0xc0) + 0x40)
    
    if (rcx_6 s> 0)
        int32_t rax_9 = arg1[0x94].d
        
        if (rax_9 s< 0)
            rcx_6 = 0
        else if (rax_9 s< rcx_6)
            rcx_6 = rax_9
        
        int32_t rsi_1 = 0
        
        if (rcx_6 s> 0)
            int64_t i = 0
            
            do
                int32_t rdx_3
                
                if (rsi_1 s< 0 || rsi_1 s>= arg1[0x9b].d)
                    rdx_3 = rsi_1
                else
                    rdx_3 = *(arg1[0x9a] + (i << 2))
                
                if (rdx_3 != 0xffffffff)
                    sub_142096540(&arg1[0x9f], rdx_3)
                
                rsi_1 += 1
                i += 1
            while (i s< sx.q(rcx_6))

arg1[0x94].d = 0

if (*(arg1 + 0x4a4) != 0)
    sub_1405a52a0(&arg1[0x93], 0)

arg1[0x97].d = 0

if (*(arg1 + 0x4bc) != 0)
    sub_1405dadb0(&arg1[0x96], 0)

arg1[0x9b].d = 0

if (*(arg1 + 0x4dc) != 0)
    sub_1405dadb0(&arg1[0x9a], 0)

int64_t* rdx_4 = arg1[0xa2]

if (rdx_4 != 0)
    arg1[0xa2] = 0
    sub_14204b340(&arg1[0xa2], rdx_4)

arg1[0x9c] = 0
sub_142082830(arg1)
sub_141ee8490(arg1)
return sub_141df0440(arg1) __tailcall
