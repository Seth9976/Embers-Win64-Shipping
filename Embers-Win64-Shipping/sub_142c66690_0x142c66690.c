// 函数: sub_142c66690
// 地址: 0x142c66690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* r15 = *arg1
int32_t r13 = -1
*arg3 = -1
enum WSA_ERROR rdi = WSA_WAIT_EVENT_0
void* rbx = *arg1
int32_t af = *(arg2 + 4)
enum WINSOCK_SOCKET_TYPE type = *(arg1 + 0xbc)
int32_t protocol = 0x11

if (type != SOCK_DGRAM)
    protocol = *(arg2 + 0xc)

uint32_t rax_3 = *(arg2 + 0x10)

if (rax_3 u> 0x80)
    rax_3 = 0x80

SOCKADDR name
memcpy(&name, *(arg2 + 0x20), rax_3)
int64_t rax_4 = *(rbx + 0x330)
SOCKET s

if (rax_4 == 0)
    s = socket(af, type, protocol)
else
    s = rax_4(*(rbx + 0x338), 0, &af)

uint64_t result

if (s == -1)
    result = 0
else
    int32_t rcx_3 = arg1[0x17].d
    
    if (rcx_3 != 0)
        int32_t var_e0
        int32_t rax_5 = var_e0
        
        if (af == 0x17)
            rax_5 = rcx_3
        
        int32_t var_e0_1 = rax_5
    
    uint32_t sa_family = zx.d(name.sa_family)
    int32_t result_1 = 0
    char var_78
    uint32_t sa_family_1
    char* rdx_2
    
    if (sa_family == 2)
        var_f4
        rdx_2 = &var_f4
        sa_family_1 = 2
    label_142c66799:
        int64_t rax_6
        rax_6, arg4 = sub_142c71770(sa_family_1, rdx_2, &var_78, 0x2e, arg4)
        
        if (rax_6 == 0)
            goto label_142c669ea
        
        uint16_t netshort
        netshort.b = name.sa_data[0]
        netshort:1.b = name.sa_data[1]
        ntohs(netshort)
        int512_t zmm2 = sub_142c64850(r15, "  Trying %s...\n", &var_78, arg4)
        int32_t af_1 = af
        int64_t r12
        
        if (af_1 == 2)
            if (type != SOCK_STREAM)
                r12.b = 0
            else
                r12.b = 1
        else if (af_1 != 0x17 || type != SOCK_STREAM)
            r12.b = 0
        else
            r12.b = 1
        
        if (r12.b != 0 && *(r15 + 0x606) != 0)
            zmm2 = sub_142c65d30(arg1, s, zmm2)
        
        sub_142c65b90(s)
        
        if (r12.b != 0 && *(r15 + 0x834) != 0)
            zmm2 = sub_142c66a40(r15, s, zmm2)
        
        int64_t rax_7 = *(r15 + 0x320)
        
        if (rax_7 == 0)
        label_142c66861:
            r12.b = 0
        label_142c66864:
            int32_t af_2 = af
            int32_t result_2
            
            if (af_2 == 2 || af_2 == 0x17)
                int32_t rax_9 = sub_142c89220(&name)
                result_2, zmm2 = sub_142c660e0(arg1, s, af, rax_9, zmm2)
                result_1 = result_2
            
            if ((af_2 != 2 && af_2 != 0x17) || result_2 == 0)
                sub_142c892b0(s, 1)
                uint64_t var_120[0x3]
                uint64_t* rax_10 = sub_142c59600(&var_120)
                bool cond:2_1 = arg1[0x85].d s<= 1
                *(arg1 + 0x418) = *rax_10
                
                if (not(cond:2_1))
                    zmm2 = sub_142c52ab0(r15, arg1[0x86], 3, zmm2)
                
                if (r12.b != 0 || *(arg1 + 0xbc) != 1)
                    *arg3 = s
                    result = 0
                else
                    int32_t rax_11
                    
                    if (*(arg1 + 0x40e) == r12.b)
                        rax_11 = connect(s, &name, rax_3)
                        r13 = rax_11
                    
                    if (*(arg1 + 0x40e) != r12.b || rax_11 == 0xffffffff)
                        rdi = WSAGetLastError()
                    
                    *(arg1 + 0x3fb) = af == 0x17
                    
                    if (r13 != 0xffffffff)
                        if (result_1 == 0)
                            *arg3 = s
                    else if (rdi == 0xb || rdi - 0x2733 u<= 1)
                        result_1 = 0
                        *arg3 = s
                    else
                        char* rax_14
                        int512_t zmm2_1
                        rax_14, zmm2_1 = sub_142c55790(arg1, rdi, zmm2)
                        sub_142c64850(r15, "Immediate connect fail for %s: %s\n", &var_78, zmm2_1)
                        *(r15 + 0x4b14) = rdi
                        sub_142c65200(arg1, s)
                        result_1 = r13 + 8
                    
                    result = zx.q(result_1)
            else
                sub_142c65200(arg1, s)
                
                if (result_1 == 1)
                    result_1 = 7
                
                result = zx.q(result_1)
        else
            enum WSA_ERROR rax_8 = rax_7(*(r15 + 0x328), s, 0)
            rdi = rax_8
            
            if (rax_8 == 0x2)
                r12.b = 1
                goto label_142c66864
            
            if (rax_8 == WSA_WAIT_EVENT_0)
                goto label_142c66861
            
            sub_142c65200(arg1, s)
            result = 0x2a
    else
        if (sa_family == 0x17)
            var_f0
            rdx_2 = &var_f0
            sa_family_1 = sa_family
            goto label_142c66799
        
    label_142c669ea:
        var_78 = 0
        *_errno() = 0x273f
        uint32_t* rax_19 = _errno()
        int32_t* rax_20 = _errno()
        char* rax_21
        int512_t zmm2_2
        rax_21, zmm2_2 = sub_142c55790(arg1, *rax_19, arg4)
        sub_142c64760(r15, "sa_addr inet_ntop() failed with errno %d: %s", zx.q(*rax_20), zmm2_2)
        sub_142c65200(arg1, s)
        result = 0

__security_check_cookie(rax_1 ^ &var_148)
return result
