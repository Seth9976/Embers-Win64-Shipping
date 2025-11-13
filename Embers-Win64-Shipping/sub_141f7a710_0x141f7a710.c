// 函数: sub_141f7a710
// 地址: 0x141f7a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_143284628
sub_1422b4e50(&arg1[0x2a])
sub_142287b50(&arg1[0x3b])
sub_1422877b0(&arg1[0x43])
arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 4
arg1[0x4d] = 0
arg1[0x4b] = &data_143282838
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x51].d = 0xffffffff
*(arg1 + 0x28c) = (arg1[0x21][1].d).b
arg1[0x62] = 0
arg1[0x63].d = 0
*(arg1 + 0x31c) = 8
arg1[0x64].d = 0xffff0101
*(arg1 + 0x324) = 0xff
arg1[0x69] = 0
arg1[0x6a].d = 0
*(arg1 + 0x354) = 2
arg1[0x71] = 0
arg1[0x72].d = 0
*(arg1 + 0x394) = 3
__builtin_memset(&arg1[0x73], 0, 0x18)
arg1[0x50] = &data_142e3cbf8
__builtin_memset(&arg1[0x76], 0, 0x30)
arg1[0x84].d = 0
*(arg1 + 0x424) = 4
__builtin_memset(&arg1[0x85], 0, 0x40)
arg1[0x8d] = -1
arg1[0x8e].d = 0xffffffff
__builtin_memset(arg1 + 0x474, 0, 0x14)
arg1[0x91].d = 0xffffffff
arg1[0x92] = 0
arg1[0x93] = 0
arg1[0x94].d = *(arg2 + 0x434)
arg1[0x95] = 0
arg1[0x97] = arg2[0x85]
arg1[0x98] = 0
arg1[0x99] = 0
arg1[0x9a] = arg2[0x81]
void* rax_4 = arg2[0x82]
arg1[0x9b] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[0x9c].d = arg2[0x83].d
arg1[0x9d].d = arg2[0x87].d f* arg2[0x88].d f* *(arg2 + 0x444)
*(arg1 + 0x4ec) = *(arg2 + 0x43c) f* arg2[0x88].d f* *(arg2 + 0x444)
arg1[0x9e].d = arg2[0x89].d
*(arg1 + 0x4f4) = *(arg2 + 0x44c)
arg1[0x9f].b = arg2[0x86].b
*(arg1 + 0x4f9) = *(arg2 + 0x431)
*(arg1 + 0x4fa) = arg2[0x8a].b & 1
int64_t* rcx_4 = arg2[0x84]
int64_t* rax_13

if (rcx_4 == 0)
    rax_13 = sub_14210f630(0)
else
    int128_t var_48 = zx.o(0)
    
    if (*((*(*rcx_4 + 0x270))((zx.o(0)).d, &var_48) + 0x150) != 0)
        rax_13 = sub_14210f630(0)
    else
        rax_13 = arg2[0x84]
        
        if (rax_13 == 0)
            rax_13 = sub_14210f630(0)

arg1[0x96] = rax_13
int64_t var_58 = 0
int64_t var_50 = 0
void arg_10
int64_t rax_16 = *sub_142126870((*(*rax_13 + 0x270))(rax_13, &var_58), &arg_10, arg1[0x21][1].d)
arg1[0x95] |= rax_16
void* r9_1 = arg1[0x97]

if (r9_1 != 0 && *(r9_1 + 0x30) == 0)
    void* rcx_8 = data_143f3bc58
    
    if (rcx_8 != 0)
        void var_38
        int64_t* rax_17 = sub_141f8a110(rcx_8, &var_38, arg1[0x96], r9_1)
        int64_t* rdx_4 = rax_17[1]
        int64_t r8_2 = *rax_17
        int64_t var_68 = r8_2
        int64_t* var_60 = rdx_4
        
        if (rdx_4 != 0)
            rdx_4[1].d += 1
            rdx_4 = var_60
        
        if (&arg1[0x98] != &var_68)
            arg1[0x98] = r8_2
            var_68 = 0
            sub_1405aeff0(&arg1[0x99], &var_60)
            rdx_4 = var_60
        
        if (rdx_4 != 0)
            rdx_4[1].d -= 1
            
            if (rdx_4[1].d == 1)
                int64_t* rbx_1 = var_60
                (**rbx_1)(rbx_1, rdx_4)
                int32_t rax_20 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_20 == 1)
                    int64_t* rcx_11 = var_60
                    (*(*rcx_11 + 8))(rcx_11, 1)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t rbp_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*(*var_30 + 8))(var_30, zx.q(rbp_1))

*(arg1 + 0x3b) &= 0x7f
return arg1
