// 函数: sub_1417cc6c0
// 地址: 0x1417cc6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6a8
int64_t rax_1 = __security_cookie ^ &var_6a8
*(arg3 + 1) = 1
int512_t zmm0
zmm0.o = zx.o(0)
*(arg3 + 0x58) = 0
int64_t var_688 = 0
int32_t var_67c = 0
char* rbx = arg2
int128_t var_638 = zx.o(0)
int16_t var_680 = 0x100
int64_t* var_628 = arg1
void var_617
void* r8 = &var_617
var_638.q = (*(*arg1 + 0x78))(zmm0)
void* r9 = &var_617
uint64_t rax_4 = 0
char r10 = 1
var_688:4.d = 0
var_688.d = 0
int64_t result_1 = 0
char var_618 = 0
int32_t var_110[0x22]
var_110[0] = 0xffffffff
int64_t var_210[0x20]

if (*rbx != 0)
    while (true)
        void* rdx = r8
        void var_218
        
        if (r8 u>= &var_218)
            break
        
        char rcx = *rbx
        
        if (rcx == 0x5b)
            char rdx_1 = rbx[1]
            rbx = &rbx[1]
            *r8 = 0
            r8 += 1
            
            if (rdx_1 - 0x30 u<= 9)
                uint64_t rcx_1 = 0
                
                while (rdx_1 - 0x30 u<= 9)
                    int32_t rax_7 = sx.d(rdx_1)
                    rdx_1 = rbx[1]
                    rbx = &rbx[1]
                    rcx_1 = zx.q(rax_7 + (((rcx_1 * 5).d - 0x18) << 1))
                
                if (rdx_1 == 0x5d)
                    var_110[zx.q(var_688:4.d)] = rcx_1.d
                    rax_4 = zx.q(var_688:4.d)
                    continue
        else if (rcx != 0x2e)
            r8 += 1
            rbx = &rbx[1]
        label_1417cc80a:
            char rax_11 = *rbx
            *rdx = rcx
            
            if (rax_11 == 0)
                break
            
            rax_4 = zx.q(var_688:4.d)
            continue
        else if (rax_4.d u< 0x20)
            var_210[rax_4] = r9
            uint64_t rax_10 = zx.q(var_688:4.d + 1)
            var_688:4.d = rax_10.d
            
            if (rax_10.d u< 0x20)
                var_110[rax_10] = 0xffffffff
            
            r8 += 1
            rbx = &rbx[1]
            r9 = r8
            rcx = 0
            goto label_1417cc80a
        
        r10 = 0
        break

*r8 = 0

if (r9 == 0 || *r9 == 0)
    goto label_1417cc848

uint64_t rax_12 = zx.q(var_688:4.d)
int64_t result

if (rax_12.d u>= 0x20)
    result = 0
else
    var_210[rax_12] = r9
    var_688:4.d += 1
    *r8 = 0
label_1417cc848:
    
    if (r10 == 0)
        result = 0
    else
        int32_t var_84_1 = 0
        int64_t var_40_1 = 0
        int64_t var_38_1 = 0
        int16_t var_88 = 0x100
        int64_t* var_30_1 = arg1
        int64_t var_40_2 = (*(*arg1 + 0x78))(arg1)
        sub_1417cc910(arg1, &var_88, &var_688, 0, arg4)
        result = result_1
        *arg3 = var_680.o
        int128_t var_670
        arg3[1] = var_670
        int128_t var_660
        arg3[2] = var_660
        int128_t var_650
        arg3[3] = var_650
        int128_t var_640
        arg3[4] = var_640
        arg3[5] = var_638

__security_check_cookie(rax_1 ^ &var_6a8)
return result
