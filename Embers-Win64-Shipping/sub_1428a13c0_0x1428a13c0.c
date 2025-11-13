// 函数: sub_1428a13c0
// 地址: 0x1428a13c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rsi = *(arg1 + 0xe8)
int32_t result_1 = 0
uint32_t rbx = 0x100
uint32_t var_c8 = 0x100
int32_t rax_2 = 5
uint32_t var_bc = 0x100
uint32_t var_c4 = 0x100

if (arg3 == 0)
    rax_2 = 0xa

void* buffer1_1 = nullptr
uint64_t r15 = 0x100
void* buffer1_2 = nullptr
int32_t count_3 = 0
int32_t count_2 = 0

if (arg3 s>= *(arg1 + 0x94))
    int32_t rax_4 = neg.d(arg3)
    rax_2 = sbb.d(rax_4, rax_4, arg3 != 0) + 2

int32_t rcx_1 = rax_2 & 0xfffffffc

if (*(rsi + 0x2c) s< 0)
    rcx_1 = rax_2

int32_t rax_6

if ((rsi[5].d & rcx_1) == 0)
    rax_6 = 0
else
    rax_6 = sub_142898c70(rsi[1])

int32_t var_b8 = rax_6
int32_t r13 = 0
uint64_t result

while (true)
    if (r13 s< rax_6)
        char* rax_7 = sub_142898ea0(rsi[1], r13)
        uint32_t rax_8 = zx.d(*rax_7)
        
        if (not(test_bit(rcx_1, rax_8)))
            goto label_1428a160f
        
        uint32_t r8_1
        
        if (rax_8 == rbx)
            r8_1 = var_c4
        else
            r15 = 0x100
            var_c8 = rax_8
            r8_1 = zx.d(*(zx.q(rax_7[2]) + *(*rsi + 8)))
            var_c4 = r8_1
        
        uint32_t rbx_1 = zx.d(rax_7[1])
        uint64_t rdx_5
        
        if (rbx_1 == var_bc)
            char rcx_9 = rax_7[2]
            rdx_5 = zx.q(rcx_9)
            
            if (rcx_9 != 0 && zx.d(*(*(*rsi + 8) + zx.q(rcx_9))) u< r8_1)
            label_1428a160b:
                rbx = var_c8
            label_1428a160f:
                rax_6 = var_b8
                r13 += 1
                continue
                continue
        else
            var_bc = rbx_1
            sub_1428a6780(buffer1_2)
            void* buffer1_3 = nullptr
            int32_t count_4
            int32_t rax_20
            int32_t r8_5
            
            if (rbx_1 != 0)
                if (rbx_1 == 1)
                    count_4 = sub_1428a29f0(sub_1427ec3c0(arg2), &buffer1_3)
                    goto label_1428a1534
                
                rax_20 = 0x9ef
                r8_5 = 0x85
            label_1428a1638:
                int32_t* var_d8
                var_d8.d = rax_20
                sub_1428a5670(0xb, 0x6b, r8_5, "crypto\x509\x509_vfy.c", var_d8.d)
                result = 0xffffffff
                break
            
            count_4 = sub_1428a2de0(arg2, &buffer1_3)
        label_1428a1534:
            count_3 = count_4
            
            if (count_4 s>= 0)
                buffer1_2 = buffer1_3
            
            if (count_4 s< 0 || buffer1_2 == 0)
                rax_20 = 0x9f4
                r8_5 = 0x41
                goto label_1428a1638
            
            r15 = 0x100
            rdx_5 = zx.q(rax_7[2])
            var_c4 = zx.d(*(*(*rsi + 8) + rdx_5))
        
        uint32_t rax_16 = zx.d(rdx_5.b)
        int32_t count_1
        void* buffer1
        
        if (rax_16 == r15.d)
            buffer1 = buffer1_1
        label_1428a15ee:
            count_1 = count_2
        label_1428a15f2:
            uint64_t count = zx.q(count_1)
            
            if (count != *(rax_7 + 0x10))
                goto label_1428a160b
            
            if (memcmp(buffer1, *(rax_7 + 8), count) != 0)
                goto label_1428a160b
            
            if (var_c8 - 2 u<= 1)
                result_1 = 1
            label_1428a1677:
                int64_t rcx_15 = rsi[4]
                *(rsi + 0x2c) = arg3
                rsi[3] = rax_7
                sub_1428a6780(rcx_15)
                rsi[4] = arg2
                sub_1428a3ba0(arg2)
            else if (*(rsi + 0x2c) s< 0)
                goto label_1428a1677
        else
            r15 = zx.q(rax_16)
            buffer1 = buffer1_2
            buffer1_1 = buffer1
            count_1 = count_3
            int32_t* r8_3 = *(**rsi + (r15 << 3))
            count_2 = count_1
            
            if (r8_3 == 0)
                goto label_1428a15f2
            
            void var_88
            buffer1 = &var_88
            buffer1_1 = &var_88
            int32_t rax_18 =
                sub_142891710(buffer1_2, zx.q(count_3), &var_88, &count_2, r8_3, nullptr)
            
            if (rax_18 != 0)
                goto label_1428a15ee
            
            result_1 = rax_18 - 1
    
    sub_1428a6780(buffer1_2)
    result = zx.q(result_1)
    break

__security_check_cookie(rax_1 ^ &var_f8)
return result
