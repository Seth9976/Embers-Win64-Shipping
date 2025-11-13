// 函数: sub_142c5bc80
// 地址: 0x142c5bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = nullptr
uint64_t r13
r13.b = 0
int32_t rbx = sub_142c5f540(arg1, arg2).d
char arg_10

if ((*(arg1 + 0x4ba0) & 0x28) == 0 || (*(*(arg2 + 0x438) + 0x7c) & 3) == 0)
    arg_10 = 0
else
    arg_10 = 1

char result_1

if (*(arg2 + 0x3f9) == 0 || (*(arg1 + 0x4bb0) & 0x28) == 0 || (*(*(arg2 + 0x438) + 0x7c) & 3) == 0)
    result_1 = 0
else
    result_1 = 1

*arg4 = 0
*arg6 = 0

if ((rbx.b & 1) != 0)
    char rax_1
    rax_1, arg5 = sub_142c70330(arg1, arg2, arg5)
    
    if (rax_1 != 0)
        rbx &= 0xfffffffe

char* result
int512_t zmm2
result, zmm2 = sub_142c6ec70(arg2, *(arg1 + 0xa48), arg5)
char* result_2 = result

if (result == 0)
    result.b = 0
else
    int32_t rcx_2 = *result
    char* r12_1
    
    if (rcx_2 == 2)
        r12_1 = nullptr
    else
        void* rax_2 = *(arg1 + 0xc0)
        
        if (rax_2 == 0)
            r12_1 = nullptr
        else
            r12_1 = sx.q(*(rax_2 + 0x154))
    
    char* var_50_1 = r12_1
    char const* const rax_3
    
    if (rcx_2 != 1)
        rax_3 = "serially"
        
        if (rcx_2 == 2)
            rax_3 = "can multiplex"
    else
        rax_3 = "can pipeline"
    
    int64_t r8_1
    
    if (*(arg2 + 0x3f3) == 0)
        r8_1 = *(arg2 + 0xd0)
    else
        r8_1 = *(arg2 + 0xf8)
    
    char const* const var_68_1 = rax_3
    int64_t r8_2
    int512_t zmm2_1
    result, r8_2, zmm2_1 = sub_142c64850(arg1, "Found bundle for host %s: %p [%s]\n", r8_1, zmm2)
    
    if (rbx == 0)
        goto label_142c5be64
    
    int32_t temp0_1 = *result_2
    
    if (temp0_1 s> 0)
        goto label_142c5be1c
    
    if (temp0_1 != 0 || *(arg1 + 0x853) == 0)
        result, r8_2, zmm2_1 =
            sub_142c64850(arg1, "Server doesn't support multi-use (yet)\n", r8_2, zmm2_1)
        rbx = 0
    label_142c5be1c:
        
        if (*result_2 == 1)
            result = sub_142c53090(*(arg1 + 0xc0), 1)
        
        char const* const rdx_3
        
        if (*result_2 != 1 || result.b != 0)
            if (*result_2 != 2)
                goto label_142c5be64
            
            if (sub_142c53090(*(arg1 + 0xc0), 2).b != 0)
                goto label_142c5be64
            
            rdx_3 = "Could multiplex, but not asked to!\n"
        else
            rdx_3 = "Could pipeline, but not asked to!\n"
        
        result, zmm2_1 = sub_142c64850(arg1, rdx_3, r8_2, zmm2_1)
        rbx = 0
    label_142c5be64:
        void** i = *(result_2 + 0x10)
        
        if (i == 0)
            result.b = 0
        else
            int64_t rax_4 = sx.q(rbx)
            void* r8_3
            
            do
                int64_t* rbx_1 = *i
                i = i[2]
                result, r8_3, zmm2_1 = sub_142c60c30(rbx_1, arg1, zmm2_1)
                
                if (result.b == 0)
                    char* rdi_2 = rbx_1[0x9e] + rbx_1[0x9a]
                    
                    if (rax_4 == 0)
                        if (rdi_2 == 0)
                            if (rbx_1[0x11].b == rdi_2.b)
                                result, r8_3, zmm2_1 = sub_142c64850(arg1, 
                                    "Connection #%ld is still name resolving, can't reuse\n", 
                                    zx.q(*(rbx_1 + 0x64)), zmm2_1)
                            else if (rbx_1[0x47] == -1 || *(rbx_1 + 0x3f1) != 0)
                                r13 = zx.q(r13.b)
                                
                                if (*(rbx_1 + 0x3f1) == 0)
                                    r13 = 1
                                
                                result, r8_3, zmm2_1 = sub_142c64850(arg1, 
                                    "Connection #%ld isn't open enough, can't reuse\n", 
                                    zx.q(*(rbx_1 + 0x64)), zmm2_1)
                            else
                            label_142c5bf5e:
                                void* rcx_12 = rbx_1[0x87]
                                r8_3 = *(arg2 + 0x438)
                                
                                if ((((*(rcx_12 + 0x80)).b ^ (*(r8_3 + 0x80)).b) & 1) == 0)
                                label_142c5bfa3:
                                    
                                    if (*(arg2 + 0x3f6) == *(rbx_1 + 0x3f6))
                                        result = zx.q(*(arg2 + 0x3f7))
                                        
                                        if (result.b == *(rbx_1 + 0x3f7))
                                            if (result.b == 0)
                                            label_142c5c00c:
                                                
                                                if (*(arg2 + 0x3f3) == *(rbx_1 + 0x3f3)
                                                        && *(arg2 + 0x3f4) == *(rbx_1 + 0x3f4))
                                                    if (*(arg2 + 0x3f6) == 0)
                                                    label_142c5c0ef:
                                                        int64_t r11_1 = rax_4
                                                        
                                                        if (r11_1 != 0 || rbx_1[0xc].b == r11_1.b)
                                                            r8_3 = *(arg2 + 0x788)
                                                            
                                                            if (r8_3 == 0
                                                                && *(arg2 + 0x790) == r8_3.w)
                                                            label_142c5c17b:
                                                                int64_t* r10_1 = *(arg2 + 0x438)
                                                                char r9_1 = (r10_1[0x10].d).b
                                                                
                                                                if (r9_1 s< 0)
                                                                label_142c5c1eb:
                                                                    
                                                                    if (*(arg2 + 0x3f6) != 0
                                                                            && (r9_1 & 1) == 0
                                                                            && *(arg2 + 0x401) == 0)
                                                                        goto label_142c5c2ff
                                                                    
                                                                    int32_t rax_9
                                                                    rax_9, r8_3 =
                                                                        sub_142c70460(*r10_1, *rbx_1[0x87])
                                                                    
                                                                    if (rax_9 != 0)
                                                                    label_142c5c250:
                                                                        
                                                                        if (*(arg2 + 0x3f3) != 0)
                                                                            result, r8_3 = sub_142c70460(
                                                                                *(arg2 + 0xf8), rbx_1[0x1f])
                                                                        
                                                                        if ((*(arg2 + 0x3f3) == 0
                                                                                || result.d != 0) && (
                                                                                *(arg2 + 0x3f4) == 0
                                                                                || *(arg2 + 0x180) == rbx_1[0x30].d))
                                                                            result, r8_3 = sub_142c70460(
                                                                                *(arg2 + 0xd0), rbx_1[0x1a])
                                                                            
                                                                            if (result.d != 0
                                                                                    && *(arg2 + 0x17c) == *(rbx_1 + 0x17c))
                                                                                if (((*(arg2 + 0x438))[0x80] & 1) == 0)
                                                                                label_142c5c2f1:
                                                                                    r11_1 = rax_4
                                                                                label_142c5c2ff:
                                                                                    
                                                                                    if (arg_10 != 0)
                                                                                        result = *(arg2 + 0x1f0)
                                                                                        r8_3 = rbx_1[0x3e] - result
                                                                                        uint32_t j
                                                                                        uint32_t rdx_23
                                                                                        
                                                                                        do
                                                                                            rdx_23 = zx.d(*result)
                                                                                            j = zx.d(*(result + r8_3))
                                                                                            
                                                                                            if (rdx_23 != j)
                                                                                                break
                                                                                            
                                                                                            result = &result[1]
                                                                                        while (j != 0)
                                                                                        
                                                                                        if (rdx_23 - j == 0)
                                                                                            result = *(arg2 + 0x1f8)
                                                                                            r8_3 = rbx_1[0x3f] - result
                                                                                            uint32_t j_1
                                                                                            uint32_t rdx_25
                                                                                            
                                                                                            do
                                                                                                rdx_25 = zx.d(*result)
                                                                                                j_1 = zx.d(*(result + r8_3))
                                                                                                
                                                                                                if (rdx_25 != j_1)
                                                                                                    break
                                                                                                
                                                                                                result = &result[1]
                                                                                            while (j_1 != 0)
                                                                                            
                                                                                            if (rdx_25 - j_1 == 0)
                                                                                                goto label_142c5c379
                                                                                    else if (rbx_1[0xa4].d == 0)
                                                                                    label_142c5c379:
                                                                                        result = zx.q(result_1)
                                                                                        
                                                                                        if (result.b != 0)
                                                                                            r8_3 = rbx_1[0x2d]
                                                                                            
                                                                                            if (r8_3 != 0)
                                                                                                int64_t r9_2 = rbx_1[0x2e]
                                                                                                
                                                                                                if (r9_2 != 0)
                                                                                                    result = *(arg2 + 0x168)
                                                                                                    r8_3 -= result
                                                                                                    uint32_t j_2
                                                                                                    uint32_t rdx_27
                                                                                                    
                                                                                                    do
                                                                                                        rdx_27 = zx.d(*result)
                                                                                                        j_2 = zx.d(*(result + r8_3))
                                                                                                        
                                                                                                        if (rdx_27 != j_2)
                                                                                                            break
                                                                                                        
                                                                                                        result = &result[1]
                                                                                                    while (j_2 != 0)
                                                                                                    
                                                                                                    if (rdx_27 - j_2 == 0)
                                                                                                        result = *(arg2 + 0x170)
                                                                                                        void* r9_3 = r9_2 - result
                                                                                                        uint32_t j_3
                                                                                                        uint32_t rdx_29
                                                                                                        
                                                                                                        do
                                                                                                            rdx_29 = zx.d(*result)
                                                                                                            j_3 = zx.d(*(result + r9_3))
                                                                                                            
                                                                                                            if (rdx_29 != j_3)
                                                                                                                break
                                                                                                            
                                                                                                            result = &result[1]
                                                                                                        while (j_3 != 0)
                                                                                                        
                                                                                                        if (rdx_29 - j_3 == 0)
                                                                                                            result = zx.q(result_1)
                                                                                                        label_142c5c403:
                                                                                                            
                                                                                                            if (arg_10 != 0 || result.b != 0)
                                                                                                                r15 = rbx_1
                                                                                                                
                                                                                                                if (arg_10 != 0 && rbx_1[0xa4].d != 0)
                                                                                                                    *arg4 = 1
                                                                                                                    break
                                                                                                                
                                                                                                                if (result.b != 0 && rbx_1[0xa8].d != 0)
                                                                                                                    *arg4 = 1
                                                                                                                    break
                                                                                                            else
                                                                                                                if (r11_1 == 0 || rdi_2 == 0)
                                                                                                                    r15 = rbx_1
                                                                                                                    break
                                                                                                                
                                                                                                                if (r12_1 == 0 || rdi_2 u< r12_1)
                                                                                                                    result, r8_3, zmm2_1 =
                                                                                                                        sub_142c6ffa0(arg1, rbx_1, zmm2_1)
                                                                                                                    
                                                                                                                    if (result.b == 0)
                                                                                                                        if (r12_1 == 0)
                                                                                                                            r15 = rbx_1
                                                                                                                            result, r8_3, zmm2_1 = sub_142c64850(
                                                                                                                                arg1, 
                                                                                                                                "Multiplexed connection found!\n", 
                                                                                                                                r8_3, zmm2_1)
                                                                                                                            break
                                                                                                                        
                                                                                                                        if (rdi_2 u< var_50_1)
                                                                                                                            r15 = rbx_1
                                                                                                                            var_50_1 = rdi_2
                                                                                                                    else
                                                                                                                        result, r8_3, zmm2_1 = sub_142c64850(
                                                                                                                            arg1, "Penalized, skip\n", r8_3, zmm2_1)
                                                                                                                else
                                                                                                                    result, r8_3, zmm2_1 = sub_142c64850(
                                                                                                                        arg1, "Pipe is full, skip (%zu)\n", 
                                                                                                                        rdi_2, zmm2_1)
                                                                                        else if (rbx_1[0xa8].d == 0)
                                                                                            goto label_142c5c403
                                                                                else
                                                                                    result, r8_3 = sub_142c5b1c0(
                                                                                        arg2 + 0x360, &rbx_1[0x6c])
                                                                                    
                                                                                    if (result.b != 0)
                                                                                        if (*(rbx_1 + 0x2c4) == 2)
                                                                                            goto label_142c5c2f1
                                                                                        
                                                                                        r13.b = 1
                                                                    else
                                                                        result =
                                                                            sub_142c60f10(*(rbx_1[0x87] + 0x7c))
                                                                        
                                                                        if (
                                                                                result.d == *(*(arg2 + 0x438) + 0x7c)
                                                                                && rbx_1[0x7e].b != 0)
                                                                            goto label_142c5c250
                                                                else
                                                                    result = *(arg2 + 0x1f0)
                                                                    r8_3 = rbx_1[0x3e] - result
                                                                    uint32_t j_4
                                                                    uint32_t rdx_14
                                                                    
                                                                    do
                                                                        rdx_14 = zx.d(*result)
                                                                        j_4 = zx.d(*(result + r8_3))
                                                                        
                                                                        if (rdx_14 != j_4)
                                                                            break
                                                                        
                                                                        result = &result[1]
                                                                    while (j_4 != 0)
                                                                    
                                                                    if (rdx_14 - j_4 == 0)
                                                                        result = *(arg2 + 0x1f8)
                                                                        r8_3 = rbx_1[0x3f] - result
                                                                        uint32_t j_5
                                                                        uint32_t rdx_16
                                                                        
                                                                        do
                                                                            rdx_16 = zx.d(*result)
                                                                            j_5 = zx.d(*(result + r8_3))
                                                                            
                                                                            if (rdx_16 != j_5)
                                                                                break
                                                                            
                                                                            result = &result[1]
                                                                        while (j_5 != 0)
                                                                        
                                                                        if (rdx_16 - j_5 == 0)
                                                                            goto label_142c5c1eb
                                                            else if (
                                                                    rbx_1[0xf2].w == *(arg2 + 0x790)
                                                                    && *(rbx_1 + 0x794) == *(arg2 + 0x794))
                                                                if (r8_3 == 0)
                                                                    goto label_142c5c17b
                                                                
                                                                result = rbx_1[0xf1]
                                                                
                                                                if (result != 0)
                                                                    r8_3 -= result
                                                                    uint32_t j_6
                                                                    uint32_t rdx_12
                                                                    
                                                                    do
                                                                        rdx_12 = zx.d(*result)
                                                                        j_6 = zx.d(*(result + r8_3))
                                                                        
                                                                        if (rdx_12 != j_6)
                                                                            break
                                                                        
                                                                        result = &result[1]
                                                                    while (j_6 != 0)
                                                                    
                                                                    if (rdx_12 - j_6 == 0)
                                                                        goto label_142c5c17b
                                                    else if (*(arg2 + 0x164) == *(rbx_1 + 0x164)
                                                            && *(arg2 + 0x160) == rbx_1[0x2c].d)
                                                        result, r8_3 = sub_142c70440(
                                                            *(arg2 + 0x150), rbx_1[0x2a])
                                                        
                                                        if (result.d != 0
                                                                && *(arg2 + 0x401) == *(rbx_1 + 0x401))
                                                            if (*(arg2 + 0x164) != 2)
                                                                goto label_142c5c0ef
                                                            
                                                            bool cond:4_1
                                                            
                                                            if ((*(*(arg2 + 0x438) + 0x80) & 1)
                                                                    == 0)
                                                                result, r8_3 = sub_142c5b1c0(
                                                                    arg2 + 0x360, &rbx_1[0x6c])
                                                                
                                                                if (result.b != 0)
                                                                    cond:4_1 = *(rbx_1 + 0x2c4) != 2
                                                                label_142c5c0e9:
                                                                    
                                                                    if (not(cond:4_1))
                                                                        goto label_142c5c0ef
                                                            else
                                                                result, r8_3 = sub_142c5b1c0(
                                                                    arg2 + 0x3a8, &rbx_1[0x75])
                                                                
                                                                if (result.b != 0)
                                                                    cond:4_1 = *(rbx_1 + 0x314) != 2
                                                                    goto label_142c5c0e9
                                            else if (*(arg2 + 0x12c) == *(rbx_1 + 0x12c)
                                                    && *(arg2 + 0x128) == rbx_1[0x25].d)
                                                result, r8_3 =
                                                    sub_142c70440(*(arg2 + 0x118), rbx_1[0x23])
                                                
                                                if (result.d != 0)
                                                    goto label_142c5c00c
                                else if (sub_142c60f10(*(rcx_12 + 0x7c)).d == *(r8_3 + 0x7c)
                                        && rbx_1[0x7e].b != 0)
                                    goto label_142c5bfa3
                    else if (*(rbx_1 + 0x3ff) == result.b || *(rbx_1 + 0x3f1) == result.b)
                        if (*(rbx_1 + 0x40d) != 0)
                            goto label_142c5bf5e
                        
                        int64_t* rax_5 = rbx_1[0x97]
                        void* const r8_4
                        
                        if (rax_5 == 0)
                            r8_4 = nullptr
                        else
                            r8_4 = *rax_5
                        
                        int64_t* rcx_10 = rbx_1[0x9b]
                        
                        if (rcx_10 != 0)
                            rcx_10 = *rcx_10
                        
                        if (r8_4 == 0)
                            if (rcx_10 == 0)
                                goto label_142c5bf5e
                            
                            result, r8_3 = sub_142c5f540(rcx_10, rbx_1)
                            
                            if ((result.b & 1) != 0)
                                goto label_142c5bf5e
                        else
                            result, r8_3 = sub_142c5f540(r8_4, rbx_1)
                            
                            if ((result.b & 1) != 0)
                                goto label_142c5bf5e
            while (i != 0)
            
            if (r15 == 0)
                if (r13.b != 0 && *(arg1 + 0x853) != 0)
                    sub_142c64850(arg1, 
                        "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n", r8_3, 
                        zmm2_1)
                    *arg6 = 1
                
                result.b = 0
            else
                *arg3 = r15
                result.b = 1
    else
        sub_142c64850(arg1, "Server doesn't support multi-use yet, wait\n", r8_2, zmm2_1)
        *arg6 = 1
        result.b = 0

return result
