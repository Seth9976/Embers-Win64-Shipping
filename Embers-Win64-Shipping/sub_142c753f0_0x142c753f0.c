// 函数: sub_142c753f0
// 地址: 0x142c753f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r8 = *(arg1 + 0x164)
void* r15 = *arg1
int32_t* rdi = arg2
int32_t rsi = 2
int32_t* rdx = 0x314
int64_t var_78 = 0
uint64_t r12
r12.b = 0
int32_t result_2 = 0
char var_96 = 0
int32_t result_1 = 0
int32_t* rax_2

if (r8 == 2)
    rax_2 = 0x314
    
    if (arg1[0x48] != -1)
        rax_2 = 0x33c

char* r14

if (r8 != 2 || *(rax_2 + arg1) == 2)
    r14 = arg1[0x1a]
else
    r14 = arg1[0x2a]

if (r8 == 2 && arg1[0x48] != -1)
    rdx = 0x33c

int64_t rbx

if (r8 != 2 || *(rdx + arg1) == 2)
    rbx = arg1[0x1b]
else
    rbx = arg1[0x2b]

int64_t var_88 = rbx
void buffer2
int32_t rax_3

if (*(arg1 + 0x3fa) != 0)
    rax_3 = sub_142c70d80(0x17, r14, &buffer2)

if (*(arg1 + 0x3fa) == 0 || rax_3 == 0)
    if (sub_142c70d80(2, r14, &buffer2) != 0)
        var_78 = 4
        rsi = 7
else
    var_78 = 0x10
    rsi = 7

int32_t* rax_5
int64_t r8_3
int512_t zmm2
rax_5, r8_3, zmm2 = sub_1428ac7d0(rdi, 0x55, nullptr, nullptr)
int64_t rbp = -1

if (rax_5 == 0)
    goto label_142c756ac

rdi.b = 0
char var_98_1 = 0
char var_97_1 = 0
int32_t rax_6 = sub_142898c70(rax_5)
int32_t r14_1 = 0

if (rax_6 s> 0)
    while (rdi.b == 0)
        int32_t* rax_7 = sub_142898ea0(rax_5, r14_1)
        int32_t rcx_3 = *rax_7
        
        if (rcx_3 != 2)
            r12 = zx.q(r12.b)
            
            if (rcx_3 == 7)
                r12 = 1
        else
            var_96 = 1
        
        if (rcx_3 != rsi)
            rdi = zx.q(var_98_1)
        else
            char* buffer1 = sub_14060aa50(*(rax_7 + 8))
            int64_t count = sx.q(sub_1406938b0(*(rax_7 + 8)))
            
            if (rsi == 2)
                int64_t rax_10 = -1
                
                do
                    rax_10 += 1
                while (buffer1[rax_10] != 0)
                
                if (count != rax_10)
                    rbx = var_88
                    rdi = zx.q(var_98_1)
                else if (sub_142c8d670(buffer1, r14) == 0)
                    rbx = var_88
                    rdi = zx.q(var_98_1)
                else
                    rbx = var_88
                    rdi.b = 1
                    var_98_1 = 1
                    zmm2 = sub_142c64850(r15, " subjectAltName: host "%s" matched cert's "%s"\n", 
                        rbx, zmm2)
            else if (rsi != 7 || count != var_78)
                rbx = var_88
                rdi = zx.q(var_98_1)
            else
                rbx = var_88
                
                if (memcmp(buffer1, &buffer2, count) == 0)
                    var_97_1 = 1
                    zmm2 = sub_142c64850(r15, 
                        " subjectAltName: host "%s" matched cert's IP address!\n", rbx, zmm2)
                
                rdi = zx.q(var_98_1)
        
        r14_1 += 1
        
        if (r14_1 s>= rax_6)
            break
    
    result_1 = result_2

r8_3 = sub_1428e7a10(rax_5)
uint64_t result

if (rdi.b != 0 || var_97_1 != rdi.b)
    result = zx.q(result_1)
else if (var_96 != rdi.b || r12.b != 0)
    sub_142c64760(r15, 
        "SSL: no alternative certificate subject name matches target host name '%s'", rbx, 
        sub_142c64850(r15, " subjectAltName does not match %s\n", rbx, zmm2))
    result = 0x33
else
    rdi = arg2
label_142c756ac:
    result_2.q = &data_1434cce10
    int64_t* rax_12 = sub_1428a3930(rdi)
    char* rax_17
    
    if (rax_12 == 0)
        rax_17 = result_2.q
    else
        int32_t i
        i, r8_3 = sub_1428e73d0(rax_12, 0xd, 0xffffffff)
        
        if (i s< 0)
            rax_17 = result_2.q
        else
            int32_t i_1
            
            do
                i_1 = i
                i, r8_3 = sub_1428e73d0(rax_12, 0xd, i)
            while (i s>= 0)
            
            if (i_1 s< 0)
                rax_17 = result_2.q
            else
                char* rax_14 = sub_1428e7030(sub_1428e7380(rax_12, i_1))
                
                if (rax_14 == 0)
                    rax_17 = result_2.q
                else
                    int64_t rsi_1
                    
                    if (opus_repacketizer_get_nb_frames(rax_14) != 0xc)
                        int32_t rax_20
                        rax_20, r8_3, zmm2 = sub_1428f6be0(&result_2, rax_14)
                        rsi_1 = zx.q(rax_20)
                    label_142c7578c:
                        rax_17 = result_2.q
                        
                        if (rax_17 != 0)
                            do
                                rbp += 1
                            while (rax_17[rbp] != 0)
                            
                            if (sub_142c56200(rbp.d) != rsi_1.d)
                                r8_3, zmm2 =
                                    sub_142c64760(r15, "SSL: illegal cert name field", r8_3, zmm2)
                                result_1 = 0x33
                            
                            rax_17 = result_2.q
                    else
                        int32_t rax_16 = sub_1406938b0(rax_14)
                        rsi_1 = sx.q(rax_16)
                        
                        if (rax_16 s< 0)
                            goto label_142c7578c
                        
                        rax_17, r8_3 = sub_1428a6730(sx.q((rsi_1 + 1).d))
                        result_2.q = rax_17
                        
                        if (rax_17 != 0)
                            int64_t rax_18 = sub_14060aa50(rax_14)
                            r8_3 = memcpy(result_2.q, rax_18, rsi_1.d)
                            *(rsi_1 + result_2.q) = 0
                            goto label_142c7578c
    
    if (rax_17 == &data_1434cce10)
        rax_17 = nullptr
    
    result_2.q = rax_17
    
    if (result_1 == 0)
        if (rax_17 != 0)
            int32_t rax_22 = sub_142c8d670(rax_17, r14)
            int64_t r8_12 = result_2.q
            
            if (rax_22 != 0)
                sub_142c64850(r15, " common name: %s (matched)\n", r8_12, zmm2)
            else
                sub_142c64760(r15, 
                    "SSL: certificate subject name '%s' does not match target host name '%s'", 
                    r8_12, zmm2)
                result_1 = 0x33
        else
            sub_142c64760(r15, "SSL: unable to obtain common name from peer certificate", r8_3, 
                zmm2)
            result_1 = 0x33
        
        rax_17 = result_2.q
    
    if (rax_17 != 0)
        sub_1428a6780(rax_17)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
