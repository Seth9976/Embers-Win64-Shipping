// 函数: sub_1416fdb20
// 地址: 0x1416fdb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xb].q
int64_t* r10 = *(arg1 + 0xb8)
int32_t result = *(arg1 + 0xac) - 1

switch (result)
    case 0
        if (r10[1].b != 0)
            r10 = nullptr
        
        if (*(rcx + 8) != 0)
            rcx = nullptr
        
        return sub_1417018b0(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 1
        if (r10[1].b != 3)
            r10 = nullptr
        
        if (*(rcx + 8) != 0)
            rcx = nullptr
        
        return sub_1417014e0(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 2
        if (r10[1].b != 1)
            r10 = nullptr
        
        if (*(rcx + 8) != 0)
            rcx = nullptr
        
        return sub_141701450(rcx, arg2, &r10[2], arg3, arg4[0], arg1)
    case 3, 9, 0xd, 0x11
        return sub_1416feda0(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 4
        char rbx_1 = r10[1].b
        result = 0
        int64_t* r8_5 = r10
        
        if (rbx_1 != 0x8b)
            r8_5 = nullptr
        
        if (r8_5 != 0)
            if (*(rcx + 8) != 0)
                rcx = nullptr
            
            return sub_141701940(rcx, arg2, r8_5, arg3, arg4[0], arg1)
        
        if (rbx_1 != 0xb)
            r10 = nullptr
        
        if (r10 != 0)
            if (*(rcx + 8) != 0)
                rcx = nullptr
            
            return sub_141701a00(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 5
        if (r10[1].b != 0xc)
            r10 = nullptr
        
        if (*(rcx + 8) != 0)
            rcx = nullptr
        
        return sub_141701570(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 6
        int128_t* var_10_6 = arg1
        
        if (r10[1].b != 2)
            r10 = nullptr
        
        if (*(rcx + 8) != 0)
            rcx = nullptr
        
        return sub_141701630(rcx, arg2, r10, arg3, arg4[0])
    case 7
        if (r10[1].b != 3)
            r10 = nullptr
        
        if (*(rcx + 8) != 3)
            rcx = nullptr
        
        return sub_1416fcee0(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 8
        int128_t* var_10_8 = arg1
        
        if (r10[1].b != 1)
            r10 = nullptr
        
        if (*(rcx + 8) != 3)
            rcx = nullptr
        
        return sub_1416fb9e0(rcx, arg2, &r10[2], arg3, arg4[0])
    case 0xa
        char rbx_2 = r10[1].b
        result = 0
        int64_t* r8_11 = r10
        
        if (rbx_2 != 0x8b)
            r8_11 = nullptr
        
        if (r8_11 != 0)
            if (*(rcx + 8) != 3)
                rcx = nullptr
            
            return sub_1416fcff0(rcx, arg2, r8_11, arg3, arg4[0], arg1)
        
        if (rbx_2 != 0xb)
            r10 = nullptr
        
        if (r10 != 0)
            if (*(rcx + 8) != 3)
                rcx = nullptr
            
            return sub_1416fd070(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 0xb
        if (r10[1].b != 0xc)
            r10 = nullptr
        
        if (*(rcx + 8) != 3)
            rcx = nullptr
        
        return sub_1416fcf70(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 0xc
        int128_t* var_10_12 = arg1
        
        if (r10[1].b != 1)
            r10 = nullptr
        
        if (*(rcx + 8) != 1)
            rcx = nullptr
        
        return sub_1416fae90(rcx + 0x10, arg2, &r10[2], arg3, arg4[0])
    case 0xe
        char rbx_3 = r10[1].b
        result = 0
        int64_t* r8_15 = r10
        
        if (rbx_3 != 0x8b)
            r8_15 = nullptr
        
        if (r8_15 != 0)
            if (*(rcx + 8) != 1)
                rcx = nullptr
            
            return sub_1416fb840(rcx + 0x10, arg2, r8_15, arg3, arg4[0], arg1)
        
        if (rbx_3 != 0xb)
            r10 = nullptr
        
        if (r10 != 0)
            if (*(rcx + 8) != 1)
                rcx = nullptr
            
            return sub_1416fb910(rcx + 0x10, arg2, r10, arg3, arg4[0], arg1)
    case 0xf
        if (r10[1].b != 0xc)
            r10 = nullptr
        
        if (*(rcx + 8) != 1)
            rcx = nullptr
        
        return sub_1416faf30(rcx + 0x10, arg2, r10, arg3, arg4[0], arg1)
    case 0x10
        int128_t* var_10_16 = arg1
        
        if (r10[1].b != 2)
            r10 = nullptr
        
        if (*(rcx + 8) != 1)
            rcx = nullptr
        
        return sub_1416fb000(rcx + 0x10, arg2, r10, arg3, arg4[0])
    case 0x12
        char rbx_4 = r10[1].b
        result = 0
        void* const r8_20 = r10
        
        if (rbx_4 != 0x8b)
            r8_20 = nullptr
        
        if (r8_20 != 0)
            return sub_1416ff270(rcx, arg2, r8_20, arg3, arg4[0], arg1)
        
        if (rbx_4 != 0xb)
            r10 = nullptr
        
        if (r10 != 0)
            return sub_1416ff2f0(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 0x13
        if (r10[1].b != 0xc)
            r10 = nullptr
        
        return sub_1416ff1f0(rcx, arg2, r10, arg3, arg4[0], arg1)
    case 0x14
        return sub_1416ff990(arg4, arg1) __tailcall

return result
