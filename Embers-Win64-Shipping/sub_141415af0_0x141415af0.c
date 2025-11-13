// 函数: sub_141415af0
// 地址: 0x141415af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[1]
*arg1 = &data_142f7e2b8

if (rdx != 0)
    void* var_48
    sub_1407453e0(&var_48, rdx + 0xee8)
    void* var_38
    int32_t i_3
    
    for (int32_t i = i_3; i s< *(var_38 + 0x18); i = i_3)
        if (i s>= 0 && i s< arg1[0x5f].d)
            int32_t j = 0
            int64_t* rdi_2 = &arg1[0x5e][sx.q(i) * 0xe]
            
            if (rdi_2[1].d s> 0)
                int64_t* rbx_1 = nullptr
                
                do
                    int64_t* rcx_1 = *(rbx_1 + *rdi_2)
                    (**rcx_1)(rcx_1, 0)
                    j += 1
                    rbx_1 = &rbx_1[1]
                while (j s< rdi_2[1].d)
        
        int32_t var_3c
        int32_t var_30 = var_30 & not.d(var_3c)
        void var_40
        sub_14059bdd0(&var_40)

sub_141425720(&arg1[0x62])
int32_t i_4 = arg1[0x15].d
void* rbx_2 = arg1[0x14]

if (i_4 != 0)
    int32_t i_1
    
    do
        sub_141413290(rbx_2)
        rbx_2 += 0x5240
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

arg1[0x15].d = 0

if (*(arg1 + 0xac) != 0)
    sub_141427be0(&arg1[0x14], 0)

sub_141413090(&arg1[0x62])
sub_14125cd60(&arg1[0x5e])
sub_1410eb840(&arg1[0x3a])
sub_1410eb840(&arg1[0x16])
int32_t i_5 = arg1[0x15].d
void* rbx_3 = arg1[0x14]

if (i_5 != 0)
    int32_t i_2
    
    do
        sub_141413290(rbx_3)
        rbx_3 += 0x5240
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_3 = arg1[0x14]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

sub_1422dbb60(&arg1[2])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
