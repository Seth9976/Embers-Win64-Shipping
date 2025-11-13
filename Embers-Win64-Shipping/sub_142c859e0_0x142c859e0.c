// 函数: sub_142c859e0
// 地址: 0x142c859e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t* rbx = arg1[0xd3]
void* rdi = *arg1
int32_t fromlen[0x4]
fromlen[0] = 0x80
SOCKADDR from[0x8]
int32_t rax_2 = recvfrom(*(rbx + 0x18), *(rbx + 0x168), rbx[0x57] + 4, 0, &from, &fromlen)
bool cond:0 = rbx[0x54] != 0
rbx[0x55] = rax_2

if (not(cond:0))
    memcpy(&rbx[0x34], &from, fromlen[0])
    rbx[0x54] = fromlen[0]

uint64_t r8_3 = zx.q(rbx[0x55])
int32_t result
int512_t entry_zmm2

if (r8_3.d s>= 4)
    char* rax_4 = *(rbx + 0x168)
    uint32_t rdx_3 = zx.d(rax_4[1]) | zx.d(*rax_4) << 8
    rbx[3] = rdx_3
    uint64_t rdx_4 = zx.q(rdx_3 - 3)
    
    if (rdx_3 == 3)
        if (r8_3.d s<= 4 || zx.d(rbx[0x12].w + 1) != (zx.d(rax_4[2]) << 8 | zx.d(rax_4[3])))
            goto label_142c85be6
        
        int32_t result_1
        result_1, entry_zmm2 =
            sub_142c645e0(arg1, 1, *(rbx + 0x168) + 4, sx.q((r8_3 - 4).d), entry_zmm2)
        
        if (result_1 == 0)
            *(rdi + 0xf8) += sx.q(rbx[0x55] - 4)
            rdx_4 = sub_142c6f0c0(rdi, *(rdi + 0xf8))
            goto label_142c85be6
        
        sub_142c86610(rbx, 5, entry_zmm2)
        result = result_1
    else
        int32_t temp1_1 = rdx_4.d
        rdx_4 = zx.q(rdx_4.d - 1)
        
        if (temp1_1 == 1)
            goto label_142c85be6
        
        if (rdx_4.d == 1)
            int64_t r8_6 = *(rbx + 0x168) + 4
            rbx[2] = zx.d(rax_4[2]) << 8 | zx.d(rax_4[3])
            rdx_4, entry_zmm2 = sub_142c64850(rdi, "%s\n", r8_6, entry_zmm2)
        label_142c85be6:
            int32_t rax_14
            int512_t zmm2
            rax_14, zmm2 = sub_142c6f450(arg1, rdx_4, entry_zmm2)
            
            if (rax_14 == 0)
                result = 0
            else
                sub_142c86610(rbx, 5, zmm2)
                result = 0x2a
        else
            if (rdx_4.d != 2)
                rdx_4, entry_zmm2 =
                    sub_142c64760(rdi, "%s", "Internal error: Unexpected packet", entry_zmm2)
                goto label_142c85be6
            
            result, rdx_4, entry_zmm2 = sub_142c85710(rbx, &rax_4[2], r8_3.d - 2, entry_zmm2)
            
            if (result == 0)
                goto label_142c85be6
else
    sub_142c64760(rdi, "Received too short packet", r8_3, entry_zmm2)
    rbx[3] = 7
    result = 0
__security_check_cookie(rax_1 ^ &var_d8)
return result
