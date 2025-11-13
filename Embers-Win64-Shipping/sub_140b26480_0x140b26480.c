// 函数: sub_140b26480
// 地址: 0x140b26480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* rdi = arg1

if (*arg1 != &data_142d40450)
    int32_t rdx_1 = 0
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        sub_1405947f0(arg1, 0)
        rdx_1 = rdi[1].d
    
    rdi[1].d = rdx_1
    
    if (rdx_1 s> *(rdi + 0xc))
        sub_140594770(rdi)

if (rdi[2] != &data_142d40450)
    int32_t rdx_2 = 0
    rdi[3].d = 0
    
    if (*(rdi + 0x1c) != 0)
        sub_1405947f0(&rdi[2], 0)
        rdx_2 = rdi[3].d
    
    rdi[3].d = rdx_2
    
    if (rdx_2 s> *(rdi + 0x1c))
        sub_140594770(&rdi[2])

if (rdi[4] != &data_142d40450)
    int32_t rdx_3 = 0
    rdi[5].d = 0
    
    if (*(rdi + 0x2c) != 0)
        sub_1405947f0(&rdi[4], 0)
        rdx_3 = rdi[5].d
    
    rdi[5].d = rdx_3
    
    if (rdx_3 s> *(rdi + 0x2c))
        sub_140594770(&rdi[4])

if (rdi[6] != &data_142d40450)
    int32_t rdx_4 = 0
    rdi[7].d = 0
    
    if (*(rdi + 0x3c) != 0)
        sub_1405947f0(&rdi[6], 0)
        rdx_4 = rdi[7].d
    
    rdi[7].d = rdx_4
    
    if (rdx_4 s> *(rdi + 0x3c))
        sub_140594770(&rdi[6])

if (rdi[8] == &data_142d40450)
    return 

rdi[9].d = 0

if (*(rdi + 0x4c) != 0)
    sub_1405947f0(&rdi[8], 0)
    rbx = rdi[9].d

rdi[9].d = rbx

if (rbx s> *(rdi + 0x4c))
    sub_140594770(&rdi[8])
