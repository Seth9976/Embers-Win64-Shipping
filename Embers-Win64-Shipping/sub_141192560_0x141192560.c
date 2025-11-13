// 函数: sub_141192560
// 地址: 0x141192560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4)
uint64_t r8_1 = zx.q(rax) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
int32_t rax_3 = (temp1 - temp0) s>> 1
uint64_t rdi_2 = zx.q(rax_3 s/ 3)
sub_1410b3fe0(arg2, u"PERMUTATION_SAMPLESET", r8_1)
sub_1410b3fe0(arg2, u"PERMUTATION_INTEGRATION_TYPE", zx.q(rax_3 - (rdi_2 * 3).d))
int32_t rdi_3 = rdi_2.d & 0x80000001

if (rdi_3 s< 0)
    rdi_3 = ((rdi_3 - 1) | 0xfffffffe) + 1

sub_1410b3fe0(arg2, u"PERMUTATION_DEBUG", zx.q(rdi_3))
sub_1410b3fe0(arg2, u"LOCAL_LIGHT_DATA_STRIDE", 6)
sub_1410b3fe0(arg2, u"NUM_CULLED_LIGHTS_GRID_STRIDE", zx.q(data_1439b6304))
sub_1410b3fe0(arg2, u"NUM_CULLED_GRID_PRIMITIVE_TYPES", zx.q(data_1439b6308))
return sub_1410b3fe0(arg2, u"LIGHTING_PS", 1) __tailcall
