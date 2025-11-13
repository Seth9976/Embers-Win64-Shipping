// 函数: sub_1419c3580
// 地址: 0x1419c3580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14300ea08

if (sub_1419cf250() != 0)
    void* rcx = data_143f1da40
    
    if (rcx != 0)
        sub_1419d7290(rcx, 1)

int512_t zmm1
int128_t zmm6
zmm1, zmm6 = sub_1419c9f40(arg1, 1)
void* rdi = arg1[0x2a]
void* r15_1 = sx.q(arg1[0x2b].d) * 0x1c8 + rdi

if (rdi != r15_1)
    int128_t var_38_1 = zmm6
    
    do
        void* rsi_1 = *(rdi + 0x1c0)
        
        if (rsi_1 != 0)
            int32_t i = 0
            
            if (*(rsi_1 + 0x98) u> 0)
                do
                    int64_t arg_8 = (zx.o(0)).q
                    void* rbx_3 = (sx.q(i) << 6) + *(rsi_1 + 0x90)
                    void* rax_2 = *(rbx_3 + 0x10)
                    void* rcx_2 = rbx_3 + 0x20
                    
                    if (rax_2 != 0)
                        rcx_2 = rax_2
                    
                    (*rbx_3)((*(*rcx_2 + 8))(rcx_2), &arg_8)
                    i += 1
                while (i u< *(rsi_1 + 0x98))
            
            void*** rbx_4 = *(rdi + 0x1c0)
            
            if (rbx_4 != 0)
                *rbx_4 = &data_14300fba8
                sub_1405d5770(&rbx_4[0x12])
                sub_140b4cb40(rbx_4)
                j_sub_140a74f90(rbx_4)
            
            *(rdi + 0x1c0) = 0
        
        rdi += 0x1c8
    while (rdi != r15_1)

for (int64_t* i_1 = arg1[0x2d]; i_1 != 0; i_1 = i_1[1])
    int64_t* rsi_2 = *i_1
    int64_t* rcx_7 = rsi_2[6]
    
    if (rcx_7 != 0 && *(rcx_7 + 0x61) == 0)
        zmm1.o = zx.o(0)
        (*(*rcx_7 + 8))(rcx_7, zmm1)
    
    int64_t* rcx_8 = rsi_2[2]
    
    if (rcx_8 != 0)
        (**rcx_8)(rcx_8, 1)
        rsi_2[2] = 0
    
    int64_t* rdi_1 = rsi_2[7]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_9 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = rsi_2[5]
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rax_13 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t rcx_13 = *rsi_2
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    j_sub_140a74f90(rsi_2)

arg1[0x3c].d = 0
int64_t rcx_15 = arg1[0x3b]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[0x34].d = 0

if (*(arg1 + 0x1a4) != 0)
    sub_1405a5410(&arg1[0x33], 0)

arg1[0x39].d = 0xffffffff
*(arg1 + 0x1cc) = 0
sub_14059a8e0(&arg1[0x35], 0)
int64_t rcx_18 = arg1[0x37]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[0x33]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

void** const rsi_3 = &data_142efce08
void** const rax_15 = &data_142efce08
arg1[0x2c] = &data_142efce08

if (arg1[0x2d] != 0)
    int64_t i_2
    
    do
        void* rcx_20 = arg1[0x2d]
        i_2 = *(rcx_20 + 8)
        j_sub_140a74f90(rcx_20)
        arg1[0x2d] = i_2
    while (i_2 != 0)
    rax_15 = arg1[0x2c]

arg1[0x2e] = 0
arg1[0x2d] = 0
rax_15[1](&arg1[0x2c], 0)
int32_t i_7 = arg1[0x2b].d
int64_t rbx_6 = arg1[0x2a]

if (i_7 != 0)
    int32_t i_3
    
    do
        rbx_6 += 0x1c8
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    rbx_6 = arg1[0x2a]

if (rbx_6 != 0)
    sub_140a74f90(rbx_6)

int64_t* rcx_24 = arg1[0x29]

if (rcx_24 != 0)
    rcx_24[9].d -= 1
    
    if (rcx_24[9].d == 1)
        sub_140a2f6e0(rcx_24)

sub_1419c30b0(&arg1[0x27])
DeleteCriticalSection(&arg1[0x22])
int64_t rcx_27 = arg1[0x16]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

arg1[0x15].d = 0
int64_t rcx_28 = arg1[0x14]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

arg1[0xd].d = 0

if (*(arg1 + 0x6c) != 0)
    sub_140638cc0(&arg1[0xc], 0)

arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
sub_14059a8e0(&arg1[0xe], 0)
int64_t rcx_31 = arg1[0x10]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t rcx_32 = arg1[0xc]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

arg1[8] = &data_142efce08

if (arg1[9] != 0)
    int64_t i_4
    
    do
        void* rcx_33 = arg1[9]
        i_4 = *(rcx_33 + 8)
        j_sub_140a74f90(rcx_33)
        arg1[9] = i_4
    while (i_4 != 0)
    rsi_3 = arg1[8]

arg1[0xa] = 0
arg1[9] = 0
rsi_3[1](&arg1[8], 0)
sub_1419c30b0(&arg1[6])
int32_t i_8 = arg1[5].d
int64_t rbx_7 = arg1[4]

if (i_8 != 0)
    int32_t i_5
    
    do
        rbx_7 += 0x1c8
        i_5 = i_8
        i_8 -= 1
    while (i_5 != 1)
    rbx_7 = arg1[4]

if (rbx_7 != 0)
    sub_140a74f90(rbx_7)

int32_t i_9 = arg1[3].d
int64_t rbx_8 = arg1[2]

if (i_9 != 0)
    int32_t i_6
    
    do
        rbx_8 += 0x1c8
        i_6 = i_9
        i_9 -= 1
    while (i_6 != 1)
    rbx_8 = arg1[2]

if (rbx_8 != 0)
    sub_140a74f90(rbx_8)

return sub_1417eb090(arg1) __tailcall
