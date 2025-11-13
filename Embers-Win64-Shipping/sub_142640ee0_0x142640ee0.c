// 函数: sub_142640ee0
// 地址: 0x142640ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_143455198
arg1[0x44] = &data_1434557c8
arg1[0x45] = &data_143455820
arg1[0x49].b &= 0xe0
*(arg1 + 0x24c) = 0xbf800000
arg1[0x4a].d = 0xbf800000
*(arg1 + 0x254) = 0xbf800000
arg1[0x4b].d = 0x3f000000
__builtin_memset(&arg1[0x4c], 0, 0x18)
arg1[0x5a] = 0
__builtin_memset(&arg1[0x5e], 0, 0x1c)
*(arg1 + 0x5a) |= 0x40
int32_t rax_1 = arg1[0x55].d & 0xffffff3f
*(arg1 + 0x24c) = 0x42080000
int32_t rax_2 = rax_1 | 0x30
arg1[0x4a].d = 0x43100000
arg1[0x55].d = rax_2
arg1[0x54] = 0x7f7fffff
arg1[0x5b].d = 0xffffffff
arg1[0x56].d = data_143dbb1f0.d.d
*(arg1 + 0x2b4) = data_143dbb1f0:4.d.d
arg1[0x55].d = (rax_2 & 0xfffffff7) | 4
arg1[0x5c] = data_143b51510
int32_t rax_5 = data_143b51518
int64_t temp0 = _mm_unpacklo_ps(0x42480000, 0x42480000)
int32_t var_10 = 0x437a0000
arg1[0x5d].d = rax_5
arg1[0x4f] = temp0
arg1[0x50].d = var_10
*(arg1 + 0x2dc) = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"CollisionCylinder", 1)
int64_t* rax_8 = sub_142488170()
void* rax_9
int64_t r8_1
rax_9, r8_1 = sub_140cd9110(arg1, rbx, rax_8, rax_8, 1, 0)
int32_t zmm2 = *(arg1 + 0x24c)
float zmm3 = arg1[0x4a].d f* 0.5f
int32_t temp0_1 = _mm_max_ss(zmm2, 0)
arg1[0x46] = rax_9
r8_1.b = 1
float temp0_2 = _mm_max_ss(zmm3, 0)
*(rax_9 + 0x424) = temp0_1
*(rax_9 + 0x420) = _mm_max_ss(temp0_2, zmm2)
int64_t* rcx_2 = arg1[0x46]
(*(*rcx_2 + 0x620))(rcx_2, data_143f3a590, r8_1)
*(arg1[0x46] + 0x211) = 0
sub_141f49250(arg1[0x46], 1)
sub_141ef5320(arg1[0x46], 0)
arg1[0x26] = arg1[0x46]
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"InvokerComponent", 1)
int64_t* rax_14 = sub_14269ba20()
void* rax_15 = sub_140cd9110(arg1, rbx_1, rax_14, rax_14, 1, 0)
char rdx_4 = arg1[0x48].b
arg1[0x47] = rax_15
int32_t var_10_1 = 0
*(rax_15 + 0x89) = rdx_4 << 7 | (*(rax_15 + 0x89) & 0x7f)
void (* var_18)(int64_t* arg1, int64_t arg2, int32_t arg3) = sub_142660520
int64_t* rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    *rax_16 = &data_143084528
    sub_140d3a3a0(&rax_16[1], arg1)
    *(rax_16 + 0x10) = var_18.o
    rax_16[5] = sub_140a387b0()
    *rax_16 = &data_143084580

if (&var_18 != &arg1[0x60])
    if (rax_16 != 0)
        (*(*rax_16 + 0x40))(rax_16, &arg1[0x60])
    else if (arg1[0x61].d != 0)
        int64_t* rcx_10 = arg1[0x60]
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x38))(rcx_10, 0)
            int64_t rcx_11 = arg1[0x60]
            
            if (rcx_11 != 0)
                arg1[0x60] = sub_140a84c80(rcx_11, 0, 0)
            
            arg1[0x61].d = 0

if (rax_16 != 0)
    (*(*rax_16 + 0x38))(rax_16, 0)
    int64_t rax_22 = sub_140a84c80(rax_16, 0, 0)
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)

return arg1
