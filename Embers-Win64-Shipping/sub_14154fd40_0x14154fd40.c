// 函数: sub_14154fd40
// 地址: 0x14154fd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12

if (arg3 == 0)
    r12.b = 7
else
    r12.b = *(arg3 + 9) & 0x3f

uint64_t r15

if (arg4 == 0)
    r15.b = 7
else
    r15.b = *(arg4 + 9) & 0x3f

char arg_10

if (arg3 != 0 && *(arg3 + 0xa) != 0)
    arg_10 = 1

if (arg3 == 0 || *(arg3 + 0xa) == 0 || r12.b == 6)
    arg_10 = 0

int64_t r13

if (arg4 == 0 || *(arg4 + 0xa) == 0 || r15.b == 6)
    r13.b = 0
else
    r13.b = 1

void** r9 = nullptr
int64_t var_78 = 0
float* rax = nullptr
int32_t var_70 = 0

if (arg2[3].b u>= 1)
    rax = arg2

float zmm6[0x4] = zx.o(0)
int64_t* rcx

if (rax != 0)
    rcx = nullptr
    
    if (rax[3].b u>= 2)
        rcx = rax

if (rax != 0 && (rcx == 0 || *(sx.q(rcx[1].d) + *(*rcx + 0x398)) != 3))
    rax.b = 0
else
    if (*(arg1 + 0xc) u>= 2)
        r9 = arg1
    
    if (r9 == 0)
        rax.b = 0
    else
        bool cond:1_1 = *(arg3 + 0xc) == 0
        int64_t r8 = sx.q(r9[1].d) * 3
        rax = *r9
        int64_t rcx_2 = *(rax + 0x3c8)
        int64_t rdx_1 = *(rax + 0x28)
        float zmm2 = *(rcx_2 + (r8 << 2)) f- *(rdx_1 + (r8 << 2))
        float zmm1 = *(rcx_2 + (r8 << 2) + 4) f- *(rdx_1 + (r8 << 2) + 4)
        float zmm0 = *(rcx_2 + (r8 << 2) + 8) f- *(rdx_1 + (r8 << 2) + 8)
        var_78.d = zmm2
        var_78:4.d = zmm1
        float var_70_1 = zmm0
        zmm6 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0)
        
        if (cond:1_1)
            rax.b = 0
        else
            void var_68
            rax = (*(*arg3 + 0x28))(arg3, &var_68)
            zmm0 = rax[3] - *rax
            zmm2 = rax[4] - rax[1]
            zmm1 = rax[5] - rax[2]
            
            if (zmm0 >= zmm2 || not(zmm0 < zmm1))
                zmm0 = _mm_min_ss(zmm1, zmm2)
            
            if (zmm6[0] <= 0f)
                rax.b = 0
            else
                zmm1 = data_1439b8d48
                
                if (zmm1 < 0f || zmm6[0] < zmm1 * zmm0)
                    rax.b = 0
                else
                    rax.b = 1
                    zmm2 = 1f / zmm6[0]
                    var_78.d = var_78.d * zmm2
                    var_78:4.d = var_78:4.d * zmm2
                    float var_70_2 = var_70_1 * zmm2

void* rcx_12

switch (r12.b)
    case 0
        switch (r15.b)
            case 0
                return sub_141552e90(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
            case 1
                return sub_141552300(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
            case 2
                return sub_141552bd0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
            case 3
                return sub_141552620(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
            case 0xb
                return sub_141553180(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
            case 0xc
                return sub_141552910(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
    case 1
        if (r15.b == r12.b)
            return sub_14154aec0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
        
        if (r15.b == 0xc)
            return sub_14154b230(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
        
        if (r15.b == 2)
            return sub_14154b570(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
        
        if (r15.b == 0)
            return sub_141552300(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 3)
            return sub_14154bd00(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg8, arg9)
        
        if (r15.b == 0xb)
            return sub_14154b860(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
    case 2
        if (r15.b == 1)
            return sub_14154b570(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 0)
            return sub_141552bd0(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
    case 3
        if (r15.b == 0)
            return sub_141552620(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 3)
            return sub_14154c4e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9)
        
        if (r15.b == 1)
            return sub_14154bd00(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
        
        if (r15.b == 0xc)
            rcx_12 = arg1
            void* r8_9 = arg3
            
            if (rax.b == 0)
                return sub_14154c7d0(rcx_12, arg2, r8_9, arg4, arg5, arg6, arg7, arg9)
            
            return sub_14154cac0(rcx_12, arg2, r8_9, arg4, arg5, arg6, arg7, &var_78, zmm6[0], arg9)
        
        if (r15.b == 0xb)
            void* r8_21 = arg3
            int64_t* rdx_26 = arg2
            
            if (rax.b == 0)
                return sub_14154ce70(arg1, rdx_26, r8_21, arg4, arg5, arg6, arg7, arg9)
            
            return sub_14154d350(arg1, rdx_26, r8_21, arg4, arg5, arg6, arg7, &var_78, zmm6[0], 
                arg9)
    case 0xb
        if (r15.b == 1)
            return sub_14154b860(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 0)
            return sub_141553180(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 3)
            if (rax.b == 0)
                return sub_14154ce70(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
            
            return sub_14154d350(arg1, arg2, arg3, arg4, arg5, arg6, arg7, &var_78, zmm6[0], arg9)
    case 0xc
        if (r15.b == 1)
            return sub_14154b230(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 0)
            return sub_141552910(arg2, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
        
        if (r15.b == 3)
            rcx_12 = arg2
            
            if (rax.b == 0)
                return sub_14154c7d0(rcx_12, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
            
            return sub_14154cac0(rcx_12, arg1, arg4, arg3, arg6, arg5, arg7, &var_78, zmm6[0], arg9)

if (arg_10 != 0 && r15.b == 0xc)
    int64_t* rdx_31 = arg2
    
    if (rax.b == 0)
        return sub_1415510b0(arg1, rdx_31, arg3, arg4, arg5, arg6, arg7, arg9)
    
    return sub_141551390(arg1, rdx_31, arg3, arg4, arg5, arg6, arg7, &var_78, zmm6[0], arg9)

if (r12.b == 0xc && r13.b != 0)
    int64_t* rcx_31 = arg2
    
    if (rax.b == 0)
        return sub_1415510b0(rcx_31, arg1, arg4, arg3, arg6, arg5, arg7, arg9)
    
    return sub_141551390(rcx_31, arg1, arg4, arg3, arg6, arg5, arg7, &var_78, zmm6[0], arg9)

if (arg_10 != 0 && r15.b == 0xb)
    int64_t* rdx_33 = arg2
    
    if (rax.b == 0)
        return sub_141551720(arg1, rdx_33, arg3, arg4, arg5, arg6, arg7, arg9)
    
    return sub_141551be0(arg1, rdx_33, arg3, arg4, arg5, arg6, arg7, &var_78, zmm6[0], arg9)

if (r12.b == 0xb && r13.b != 0)
    void* r9_32 = arg3
    int64_t* rcx_33 = arg2
    
    if (rax.b == 0)
        return sub_141551720(rcx_33, arg1, arg4, r9_32, arg6, arg5, arg7, arg9)
    
    return sub_141551be0(rcx_33, arg1, arg4, r9_32, arg6, arg5, arg7, &var_78, zmm6[0], arg9)

if (arg_10 == 0 || r13.b == 0)
    int128_t* var_90_38 = arg9
    float var_98_38 = arg7
    return sub_141551fd0(arg1, arg2, arg3, arg4, arg5.d, arg6)

int64_t* r9_33 = arg4
float (* r8_30)[0x4] = arg3
int64_t* rdx_35 = arg2

if (rax.b == 0)
    return sub_1415509f0(arg1, rdx_35, r8_30, r9_33, arg5, arg6, arg7, arg9)

return sub_141550d50(arg1, rdx_35, r8_30, r9_33, arg5, arg6, arg7, &var_78, zmm6[0], arg9)
