// 函数: sub_1406118c0
// 地址: 0x1406118c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const rdx
int64_t r8

if (arg3 - 8 u> 6)
    switch (arg3)
        case 0
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 0xf
            memmove(arg2, "Sequence Number", 0xf)
            arg2[0xf] = 0
            return arg2
        case 1
            *(arg2 + 0x10) = 0
            rdx = "Text Event"
            *arg2 = 0
            r8 = 0xa
        case 2
            *(arg2 + 0x10) = 0
            rdx = "Copyright Notice"
            *arg2 = 0
            r8 = 0x10
        case 3
            *(arg2 + 0x10) = 0
            rdx = "Track Name"
            *arg2 = 0
            r8 = 0xa
        case 4
            *(arg2 + 0x10) = 0
            rdx = "Insturument Name"
            *arg2 = 0
            r8 = 0x10
        case 5
            *(arg2 + 0x10) = 0
            rdx = "Lyrics"
            *arg2 = 0
            r8 = 6
        case 6
            *(arg2 + 0x10) = 0
            rdx = "Marker"
            *arg2 = 0
            r8 = 6
        case 7
            *(arg2 + 0x10) = 0
            rdx = "Cue Point"
            *arg2 = 0
            r8 = 9
        case 0x20
            *(arg2 + 0x10) = 0
            rdx = "Midi Channel Prefix"
            *arg2 = 0
            r8 = 0x13
        case 0x2f
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 0xc
            memmove(arg2, "End Of Track", 0xc)
            arg2[0xc] = 0
            return arg2
        case 0x51
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 5
            memmove(arg2, "Tempo", 5)
            arg2[5] = 0
            return arg2
        case 0x54
            *(arg2 + 0x10) = 0
            rdx = "SMPTE Offset"
            *arg2 = 0
            r8 = 0xc
        case 0x58
            *(arg2 + 0x10) = 0
            rdx = "Time Signature"
            *arg2 = 0
            r8 = 0xe
        case 0x59
            *(arg2 + 0x10) = 0
            rdx = "Key Signature"
            *arg2 = 0
            r8 = 0xd
        case 0x7f
            *(arg2 + 0x10) = 0
            rdx = "Sequencer Specific"
            *arg2 = 0
            r8 = 0x12
        default
            *(arg2 + 0x10) = 0
            *arg2 = 0
            
            if (arg3 == 0xf0)
                r8 = 0x10
                rdx = "System Exclusive"
            else if (arg3 != 0xf7)
                r8 = 7
                rdx = "Unknown"
            else
                r8 = 0x15
                rdx = "System Exclusive(EOX)"
else
    switch (arg3)
        case 8
            *(arg2 + 0x18) = 0xf
            *(arg2 + 0x10) = 8
            __builtin_strncpy(arg2, "Note Off", 9)
            return arg2
        case 9
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 7
            memmove(arg2, "Note On", 7)
            arg2[7] = 0
            return arg2
        case 0xa
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 0xf
            memmove(arg2, "Note Aftertouch", 0xf)
            arg2[0xf] = 0
            return arg2
        case 0xb
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 0xa
            memmove(arg2, "Controller", 0xa)
            arg2[0xa] = 0
            return arg2
        case 0xc
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 0xe
            memmove(arg2, "Program Change", 0xe)
            arg2[0xe] = 0
            return arg2
        case 0xd
            *(arg2 + 0x10) = 0
            rdx = "Channel Aftertouch"
            *arg2 = 0
            r8 = 0x12
        case 0xe
            *(arg2 + 0x18) = 0xf
            *arg2 = 0
            *(arg2 + 0x10) = 0xa
            memmove(arg2, "Pitch Bend", 0xa)
            arg2[0xa] = 0
            return arg2

*(arg2 + 0x18) = 0xf
sub_14058ad40(arg2, rdx, r8)
return arg2
